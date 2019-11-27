a = int(input())
b = int(input())
n = int(input())

status = True
while status == True:
  if n%a == 0 and n%b == 0:
    print(n)
    status = False
  n += 1
  
