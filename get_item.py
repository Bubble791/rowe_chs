import os

beta1 = "rowe_eu.gba_mid.txt"
beta2 = "newrom/rowe2.2.1(字库).gba_mid.txt"

oldText = {}
newText = {}
with open(beta2, "r") as txtfile:
    offset = ""
    for wordLine in txtfile.readlines():
        if "地址" in wordLine:
            offset = wordLine.split("=")[1].replace("\n", "")
        if "文本=" in wordLine:
            word_tezt = wordLine.split("文本=")[1].replace("\n", "")
            newText[word_tezt] = int(offset, 16) + 0x08000000

with open(beta1, "r") as txtfile:
    offset = ""
    for wordLine in txtfile.readlines():
        if "地址" in wordLine:
            offset = wordLine.split("=")[1].replace("\n", "")
        if "文本=" in wordLine:
            word_tezt = wordLine.split("文本=")[1].replace("\n", "")
            oldText[word_tezt] = int(offset, 16) + 0x08000000

offset_equ = {}
print(oldText["You're loaded with items.[/n]I can't give you this Great Ball."])
for word in oldText:
    if word in newText:
        print(f"{hex(newText[word])}: {hex(oldText[word])},"  )
        offset_equ[hex(newText[word])] = hex(oldText[word])

for i in offset_equ:
    print(f"{i}: {offset_equ[i]},"  )
chinesetalbe = {}
with open("translate/eng_text.s", "r") as txtfile:
    off = ""
    for text in txtfile.readlines():
        if ".org" in text:
            off = "0x" + text.split("0x")[1].replace("\n", "")
        if ".strn" in text:
            ch = text.split("\"")[1]
            chinesetalbe[off] = ch

with open("translate/vanilla_script.s", "r") as txtfile:
    off = ""
    for text in txtfile.readlines():
        if ".org" in text:
            off = "0x" + text.split("0x")[1].replace("\n", "")
        if ".strn" in text:
            ch = text.split("\"")[1]
            chinesetalbe[off] = ch

newstring = ""
with open(beta2 , "r") as file:
    changflag = True
    for text in file.readlines():
        if "地址" in text:
            offsets = hex(int("0x" + text.split("0x")[1].replace("\n", ""), 16) + 0x08000000)
            

        if "中文文本" in text:
            if offsets in offset_equ:
                newstring += f" old地址={offset_equ[offsets]}\n"
            else:
                newstring += f" notfine old地址={offsets}\n"

            if offsets in offset_equ and offset_equ[offsets] in chinesetalbe:
                newstring += " 中文文本=" + chinesetalbe[offset_equ[offsets]] + "\n"
            else:
                newstring += text
        else:
            newstring += text

print(newstring)