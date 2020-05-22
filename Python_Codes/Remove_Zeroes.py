#remove 0's from array and put at last

l1=[9,8,0,8,2,3,0,1,10,0]
l2=[]	
length1=len(l1)	
			
for i in range(length1-1,-1,-1):
 print(i)
 print(l1[i])
 if l1[i]==0:
  l2.append(l1[i])
  del(l1[i])
l1=l1+l2  
print(l1)  
#print(l2)  



#OR:

l1=[9,8,0,8,2,3,0,1,10,0]
count=0
l=len(l1)
for i in range(l):
 if l1[i]!=0:
  l1[count]=l1[i]
  count=count+1
print(count)  
while count<l:
 l1[count]=0
 count+=1 
  
print(l1)  
