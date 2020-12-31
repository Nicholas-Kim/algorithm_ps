import sys

def check_palin(s):
    str =[]
    for char in s:
        str.append(s)
    while len(str) > 1:
        if str.pop() != str.pop(0):
            return False

    return True

N = sys.stdin.readline()

strlist = sys.stdin.readline().split()

flag = True
for str in strlist:
    if(check_palin(str)==False):
        print("0")
        flag = False
        break
list = []

if(flag):
    for str in strlist:
        list.append(str[0])

flag = True
for i in range(len(list)-1):
    if(list[i]!=list[i+1]):
        print("0")
        flag = False
        break

if(flag == True):
    print("1")
