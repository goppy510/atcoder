a = int(input())

t = 0
for x in range(a):
  y = a - x
  _t = x*y
  if _t >  t:
    t = _t

print(t)
