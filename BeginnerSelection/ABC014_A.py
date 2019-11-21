a = int(input())
b = int(input())

div, mod = divmod(a,b)

if a == b:
  print(0)
else:
  print(b - mod)
