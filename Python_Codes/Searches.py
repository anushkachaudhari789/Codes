
#Linear search
l1=[1,2,3,4,5]
ele=int(input("enter element u want to srch"))
flag=0
for i in range(0,len(l1)):
 print(l1[i])
 if ele in l1:
  flag=1
 else:
  flag=0
if flag==1:
 print("found")
else:
 print("not found") 
 

#Binary search

l=[2,5,8,12,16,23,38,56,72,91]
ele=int(input("enter element"))
mid=int(len(l)/2)
print(mid)
m=l[mid]
print(m)
flag=0

for i in range(0,len(l)):
 if(ele<mid):
  for j in range(0,mid-1):
   if ele in l:
    flag=1
  
 elif(ele>mid):
  for k in range(len(l),mid+1,-1):
   if ele in l:
    flag=1
  
 elif(ele==mid):
   flag=1
   
 else:
  flag=0 
if flag==1:
 print("found")
else:
 print("not found") 
