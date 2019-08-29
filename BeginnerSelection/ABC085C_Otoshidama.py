## 3重ループだと時間外になるので事前に方程式を解き,最後に制約条件からkを求める方法にした
## 870ms...もう少し早くできそうだ

x, y = list(map(int, input().split()))
s_y = y / 1000
ok = []

for i in range(x+1):
  for j in range(x+1-i):
    t = 9*i + 4*j
    if t == (s_y - x):
      k = x - i -j
      ok = [i,j,k]
      break;

if not ok:
  print("-1 -1 -1")
else:
  print("{0} {1} {2}".format(ok[0],ok[1],ok[2]))