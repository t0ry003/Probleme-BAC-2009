import pandas as pd


def excelToMd(path, sheetName="v1-v100-status"):
    df = pd.read_excel(path, sheetName)
    title = "|"
    splitLine = "|"
    for i in df.columns.values:
        title = title + i + "|"
        splitLine = splitLine + "--" + "|"
        print(title)
        print(splitLine)
    for i in df.iterrows():
        row = "|"
    for j in df.columns.values:
        row = row + str(i[1][j]) + "|"
            print(row.replace("nan", "-"))


excelToMd("D:/Files/Probleme BAC 2009/TABLE/tabel-nominal.xlsx")
