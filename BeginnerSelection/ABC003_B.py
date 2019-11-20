n = [input() for i in range(2)]
s = n[0]
t = n[1]
 
le = len(s)
tg = 'atcoder@'
 
for i in range(le):
  S = s[i]
  T = t[i]
  if S != T:
    if S=='@' and T in tg:
      pass
    elif T=='@' and S in tg:
      pass
    else:
      print('You will lose')
      exit()
print('You can win')
