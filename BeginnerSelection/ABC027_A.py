n = list(map(int, input().split()))
l1,l2,l3 = n[0],n[1],n[2]

c1 = n.count(l1)
c2 = n.count(l2)
c3 = n.count(l3)

if c1 == c2 == c3:
  print(l1)
elif c1 == c2:
  print(l3)
elif c1 == c3:
  print(l2)
else:
  print(l1)
  
