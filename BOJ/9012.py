import sys


def vpsCheck(strlist):
    str = list(strlist)
    stack = 0

    for char in str:
        if char == '(':
            stack+=1
        else:
            stack-=1
            if stack<0:
                break
    if stack == 0:
        print("YES")
    else:
        print("NO")

N = int(sys.stdin.readline())

for i in range(N):
    vpsCheck(sys.stdin.readline().strip())
