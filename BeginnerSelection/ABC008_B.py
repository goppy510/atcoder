import collections

n = int(input())
s = [input()  for i in range(n)]

name = ''
cnt  = 0

cnt_all = len(s)

for i in s:
  _cnt = 0
  for j in s:
    if i == j:
      _cnt += 1
  if  _cnt > cnt:
    name = i
    cnt = _cnt
print(name)
