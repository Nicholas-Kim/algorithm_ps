import sys
import math
input = sys.stdin.readline

x3, x2, x1, y3, y2, y1, z3, z2, z1 = input().rstrip().split()

print(math.sqrt((x2-x1)**2) + (y2-y1)**2 + (z2-z1)**2)