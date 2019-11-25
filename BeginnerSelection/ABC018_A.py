s = [int(input()) for i in range(3)]
l = sorted(s)[::-1]

for i in l:
  print(l.index(i)+1)
  
