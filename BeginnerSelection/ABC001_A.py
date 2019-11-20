import sys
read = sys.stdin.buffer.read
readline = sys.stdin.buffer.readline
readlines = sys.stdin.buffer.readlines
 
l = [int(input()) for i in range(2)]
h1 = l[0]
h2 = l[1]
h = h1 - h2
print(h)
