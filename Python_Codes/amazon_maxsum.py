l=[]
l3=[]

r=int(input("enter rows"))
c=int(input("enter clmns"))
print("enter ele rowwise")

for i in range(0,r):
 l2=[] 
 for j in range(0,c):
  ele=int(input())
  l2.append(ele)
 l.append(l2)
 
for i in range(0,len(l)):
 sumr1=0
 sumc=0
 sumrc=0
 
 for j in range(0,len(l)):
  e1=l[i][j]
  sumr1+=e1
  
 for j in range(0,len(l)):
  e2=l[j][i]
  sumc+=e2
 sumrc+=sumr1+sumc
 l3.append(sumrc)
 
maxsum=0
maxsum+=max(l3)
print("maxsum",maxsum)
 
