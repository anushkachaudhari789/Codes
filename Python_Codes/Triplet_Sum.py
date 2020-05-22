l=[-1,0,1,2,-1,-4]
l1=[]
l2=[]

for i in range(0,len(l)):
 j=i+1
 for k in range(j,len(l)):
  sum=0
  m=k+1
  for n in range(m,len(l)):
   l1=[]   
   sum=sum+l[i]+l[k]+l[n]
   if sum==0:
    l1.append(l[i])
    l1.append(l[k])
    l1.append(l[n])
    l2.append(l1)
 break 
print(l2)   

