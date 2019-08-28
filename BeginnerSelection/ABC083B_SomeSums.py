X = list(map(int, input().split()))
N = X[0]
A = X[1]
B = X[2]

total = []
a = 0
for i in range((N+1)):
  b = i
  lst = []
  if i >= A and i <= B and len(str(i)) < 2:
    total.append(i)
  else:
    while i > 0:
      lst.append(i%10)
      i //= 10
    lst.reverse()
    t = sum(int(j) for j in lst)
    if t >= A and t <= B:
      total.append(b)
a = sum(int(k) for k in total)
print(a)
