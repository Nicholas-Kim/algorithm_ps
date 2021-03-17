import sys

N = int(sys.stdin.readline())
atmList = list(map(int, sys.stdin.readline().rstrip().split()))

atmList.sort()
addList =[]
for i in range(N):
    if i!=0:
        addList.append(atmList[i]+addList[i-1])
    elif i==0:
        addList.append(atmList[i])


print(sum(addList))
