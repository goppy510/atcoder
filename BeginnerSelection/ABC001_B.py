m = int(input())
 
k = m/1000
 
if k < 0.1:
    print('00')
if k >= 0.1 and k <= 5:
  if k*10 < 10:
    kk = '0'+str(round(k*10))
    print(kk)
  else:
    print(round(k*10))
if k >= 6 and k<=30:
  print(round(k+50))
if k >=35 and k <= 70:
  print(round((k-30)/5 + 80))
if k > 70:
  print(89)
