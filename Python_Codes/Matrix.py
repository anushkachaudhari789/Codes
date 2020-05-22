l=[]
r=int(input("enter rows"))
c=int(input("enter clmns"))
print("enter ele rowwise")

for i in range(0,r):
 l2=[] 
 for j in range(0,c):
  ele=int(input())
  l2.append(ele)
 l.append(l2)
for i in range(0,r):
 for j in range(0,c):
  print("l[i][j]",l[i][j],end=" ") 
 print() 