s = []
e = []
for i in range(3):
    s1, e1 = [int(i) for i in input().split()]
    s.append(s1)
    e.append(e1)

total = 0
for ss, ee in zip(s, e):
  total += ss * ee * 0.1

print(int(total))
