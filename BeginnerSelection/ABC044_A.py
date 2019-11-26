n = int(input())
k = int(input())
x = int(input())
y = int(input())

t = 0

for i in range(n):
  if i+1 >= k+1:
    t += y
  else:
    t += x
print(t)
  
