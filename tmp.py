import os
from tools.text import format

#################################################################
#                       从sym里提取地址
#################################################################
def readSymbolData(ldfile):
    symTable = {}
    with open(ldfile, "r") as file:
        for i in file.readlines():
            offset, flag, size, name = i.replace("\n","").split(" ")
            offset = f"0x{offset}"
            symTable[name] = int(offset, 16) - 0x08000000

    return symTable

#################################################################
#                       获取脚本里的文本
#################################################################

msgboxTable = []

#跳过的文本命名
skipStringName = ["gStringVar4", "gText_PlayerUsedVar2"]

scriptDir = "data/maps/"
for subDir in os.listdir(scriptDir):
    if os.path.isdir(scriptDir + subDir):
        fullPath = scriptDir + subDir + "/scripts.inc"
        if os.path.exists(fullPath):
            with open(fullPath, "r") as scriptInc:
                for text in scriptInc.readlines():
                    if "#" in text and ".pory" in text:
                        continue
                    if "	msgbox " in text:
                        stringName = text.split("msgbox ")[1].split(",")[0].replace("\n","").replace(" MSGBOX_DEFAULT", "").replace(" MSGBOX_AUTOCLOSE", "")
                        if stringName not in msgboxTable and stringName not in skipStringName:
                            msgboxTable.append(stringName)
scriptDir = "data/scripts/"
for subDir in os.listdir(scriptDir):
    if ".inc" in subDir:
        fullPath = scriptDir + subDir
        with open(fullPath, "r") as scriptInc:
            for text in scriptInc.readlines():
                if "#" in text and ".pory" in text:
                    continue
                if "	msgbox " in text:
                    stringName = text.split("msgbox ")[1].split(",")[0].replace("\n","").replace(" MSGBOX_DEFAULT", "").replace(" MSGBOX_AUTOCLOSE", "")
                if stringName not in msgboxTable and stringName not in skipStringName:
                    msgboxTable.append(stringName)

# 文本字典
stringTable = {}

#################################################################
#                       根据地址从Rom提取文本
#################################################################
with open("rowe_eu.gba", "rb") as rom:
    symTable = readSymbolData("rom.sym")
    for dumpString in msgboxTable:
        offset = symTable[dumpString]
        rom.seek(offset)
        byteList = []
        while True:
            byteData = rom.read(1)[0]
            byteList.append(byteData)
            if byteData == 0xFF:
                break
        # print(f"{dumpString}:")
        # print(f".org {hex(offset)} + 0x08000000")
        # print(format(byteList, symTable[dumpString]).replace("オカキクケ", "{POKEBLOCK}"))
        stringTable[dumpString] = {
            "nowText" : format(byteList, symTable[dumpString]).replace("オカキクケ", "{POKEBLOCK}"),
            "vanillaText" : "",
            "chineseText" : "",
            "bytecount" : str(len(byteList)),
            "offset" : hex(symTable[dumpString] + 0x08000000)
        }

#################################################################
#                      从原版英文版里提取文本
#################################################################
vanillaSymTable = readSymbolData("bpee.ld")
with open("rom/bpee.gba", "rb") as rom:
    for dumpString in msgboxTable:
        if dumpString in vanillaSymTable:
            offset = vanillaSymTable[dumpString]
            rom.seek(offset)
            byteList = []
            while True:
                byteData = rom.read(1)[0]
                byteList.append(byteData)
                if byteData == 0xFF:
                    break
            stringTable[dumpString]["vanillaText"] = (format(byteList, vanillaSymTable[dumpString]).replace("オカキクケ", "{POKEBLOCK}"))

with open("rom/bpee_ch.gba", "rb") as rom:
    for dumpString in msgboxTable:
        if dumpString in vanillaSymTable:
            offset = vanillaSymTable[dumpString]
            rom.seek(offset)
            byteList = []
            while True:
                byteData = rom.read(1)[0]
                byteList.append(byteData)
                if byteData == 0xFF:
                    break
            stringTable[dumpString]["chineseText"] = (format(byteList, vanillaSymTable[dumpString]).replace("オカキクケ", "{POKEBLOCK}"))

#################################################################
#                     最终处理
#################################################################
newText = []
for text in stringTable:
    if stringTable[text]["vanillaText"] == "":
        newText.append(text)
        continue
    if stringTable[text]["vanillaText"].upper() == stringTable[text]["nowText"].upper():
        texts = stringTable[text]["chineseText"]
    else:
        newText.append(text)
        continue
    print(f"{text}:")
    print("    .org " + stringTable[text]["offset"])
    print("    .area " + stringTable[text]["bytecount"])
    print(f"    .strn \"{texts}\"\n    .endarea\n")

with open("translate/eng_text.s", "w") as engfile:
    for text in newText:
        texts = stringTable[text]["nowText"]
        engfile.writelines(f"{text}:\n")
        engfile.writelines("    .org " + stringTable[text]["offset"] + "\n")
        engfile.writelines("    .area " + stringTable[text]["bytecount"] + "\n")
        engfile.writelines(f"    .strn \"{texts}\"\n    .endarea\n\n")