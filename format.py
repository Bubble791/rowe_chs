import re

def split_text(text):
    # 根据标点符号分隔文本
    segments = re.split(r'(，|。|！|？|：|,)', text)
    result = []

    current_segment = ""
    for segment in segments:
        if segment.strip() == "":
            continue
        current_segment += segment
        # 如果 segment 是标点符号，表示分割点
        if segment in "，。！？：,":
            result.append(current_segment.strip())
            current_segment = ""

    # 添加最后一段
    if current_segment:
        result.append(current_segment.strip())

    return result

chas = ["騛", "錒", "醃", "婺", "嗳", "慝", "坳", "甦", "媲"]
def printSplit(text):
    start = False
    strings = ""
    var_table = []
    for char in text:
        if "{" == char:
            start = True
        if start == True:
            strings += char
        
        if "}" == char:
            start = False
            if strings not in var_table:
                var_table.append(strings)
            strings = ""

    for index, i in enumerate(var_table):
        text = text.replace(i, chas[index])

    endstring = ""
    ret = split_text(text)
    stringtable = []
    for i in ret:
        if len(i) > 11:
            stringtable.append(i[0:10])
            stringtable.append(i[10:])
        else:
            stringtable.append(i)

    skip = False
    for lineNo, text in enumerate(stringtable):
        if skip == True:
            skip = False
            continue

        endstring += text
        if lineNo + 1 < len(stringtable) and len(stringtable[lineNo]) + len(stringtable[lineNo + 1]) <= 10:
            skip = True
            endstring += stringtable[lineNo + 1]

        if lineNo % 2 == 0:
            endstring += "\\n"
        else:
            endstring += "\p"

    for index, i in enumerate(var_table):
        endstring = endstring.replace(chas[index], i)

    print(endstring[:-2] + "$")

with open("translate/eng_text.txt", "r") as textfile:
    for line in textfile.readlines():
        printSplit(line[:-1])