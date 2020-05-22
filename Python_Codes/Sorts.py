
#Bubble sort:

l1=[7,1,4,9,6,3]
f=len(l1)                                                             

for j in range(0,f):
 for i in range(0,f-j-1):
  if l1[i]>l1[i+1]:
   l1[i],l1[i+1]=l1[i+1],l1[i]
print(l1) 


#insertion sort:

l=[12,11,13,5,6]
for i in range(1,len(l)):
 j=i-1
 temp=l[i]
 while j>=0 and temp<l[j]:
  l[j+1]=l[j]
  j=j-1
 l[j+1]=temp 
print(l)
