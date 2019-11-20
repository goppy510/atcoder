n = int(input())-1
def dpp(n):
  a,b,c = 0,0,1
  for i in range(n):
    a,b,c = b,c, (a+b+c)%10007
  return a
 
 
print(dpp(n))
