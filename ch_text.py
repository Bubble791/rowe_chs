import os

not_tran = ""
with open("22", "r") as textL:
    for line in textL.readlines():
        data = line.split("	")
        if len(data) >= 7 and data[3] != "英文名":
            engs = data[3]
            chs = data[1]
            print(f"\"{engs}\" : \"{chs}\",")
