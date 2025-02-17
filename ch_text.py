import os

not_tran = ""
with open("dump_ver2.txt", "r") as textL:
    offset = ""
    char = ""
    vanlii = ""
    for line in textL.readlines():
        if "地址=0x" in line:
            offset = hex(int("0x" + line.split("地址=0x")[1].replace("\n",""), 16) + 0x08000000)
        if " 字节数=" in line:
            char = str(int(line.split(" 字节数=")[1].replace("\n","")) + 1)
        if "原文本=" in line:
            vanlii = line.split(" 原文本=")[1].replace("\n","")
        if " 中文文本=" in line:
            chinese = line.split(" 中文文本=")[1].replace("\n","")
            if chinese == "None":
                chinese = vanlii + "$"
                not_tran += (".org " + offset) + "\n"
                not_tran +=(".area " + char) + "\n"
                not_tran +=(f".strn \"{chinese}\"") + "\n"
                not_tran +=(".endarea\n") + "\n"
                offset = ""
                char = ""
                vanlii = ""
            else:
                print(".org " + offset)
                print(".area " + char)
                print(f".strn \"{chinese}\"")
                print(".endarea\n")
                offset = ""
                char = ""
                vanlii = ""

print(not_tran)