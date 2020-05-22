l=[5,3,6,1,9,4,2]
pair=0

for i in range(0,len(l)):
 sum=0
 k=i+1
 for j in range(k,len(l)):
  sum=l[i]+l[j]
  if sum==7:
   ele1=l[i]
   ele2=l[j]
   pair=pair+1
   print("elements whose sum is 7 are",ele1,ele2) 
print("total no. of pairs whose sum 7 is:",pair)   