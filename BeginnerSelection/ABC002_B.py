s = list(input())
 
hoge = 'aiueo'
 
for h in hoge:
  while h in s:
    s.remove(h)
  
str = ''.join(s)
print(str)
