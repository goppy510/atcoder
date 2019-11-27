a,d = map(int, input().split())

atk = (a+1)*d
dfn = a*(d+1)

if atk>=dfn:
  print(atk)
else:
  print(dfn)
  
