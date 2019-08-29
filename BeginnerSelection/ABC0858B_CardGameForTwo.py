X = int(input())
data = sorted(list(map(int, input().split())), reverse=True)


t = 0
for i,d in enumerate(data):
  if i % 2 == 0:
    t += d
  else:
    t -= d

print(t)