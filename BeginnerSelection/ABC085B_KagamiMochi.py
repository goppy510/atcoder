x= int(input())
data = [int(input()) for i in range(x)]

reverse_data = sorted(data, reverse=True)

cnt = 0
pre = 0

for i, d in enumerate(reverse_data):
  if i == 0:
    cnt += 1
    pre = d
  else:
    if d < pre:
      cnt += 1
      pre = d
    else:
      continue
print(cnt)