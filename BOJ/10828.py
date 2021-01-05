import sys

N = int(sys.stdin.readline())
list = []
for i in range(N):
    str = sys.stdin.readline().split()

    if(str[0]=="push"):
            list.append(str[1])
    elif(str[0]=="top"):
        if (len(list) == 0):
            print("-1")
        else:
            print(list[-1])
    elif(str[0]=="size"):
            print(len(list))
    elif(str[0]=="empty"):
        if(len(list)==0):
                print("1")
        else: print("0")
    elif(str[0]=="pop"):
        if(len(list)==0):
            print("-1")
        else:
            print(list.pop())

