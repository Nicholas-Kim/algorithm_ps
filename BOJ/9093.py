import sys


def ps(word):
    r_word = ""
    list = []
    for char in word:
        list.append(char)

    for i in range(len(list)):
        r_word += list[-1 * (i+1)]

    return r_word


N = int(sys.stdin.readline())

for i in range(N):
    str = sys.stdin.readline().split()
    tmp = ""
    for word in str:
        tmp+=(ps(word))
        tmp+=" "
    print(tmp)


