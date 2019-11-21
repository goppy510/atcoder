s = input()

alpha = list('ABCDEFGHIJKLMNOPQRSTUVWXYZ')

for a in range(len(alpha)):
  if s == alpha[a]:
    print(a+1)
