#rotate left:
l=[1, 2, 3, 4, 5, 6, 7] 
n=int(input("enter int by how many want to rotate"))
for i in range(0,n):
 ele=l[0]
 for j in range(0,len(l)-1):
  l[j]=l[j+1]
  l[len(l)-1]=ele 
print(l)  


#rotate right:
l=[1, 2, 3, 4, 5, 6, 7] 
n=int(input("enter int by how many want to rotate"))
ne=-n-1
for i in range(-1,ne,-1):
 ele=l[-1]
 for j in range(len(l)-1,-1,-1):
  l[j]=l[j-1]
 l[0]=ele 
print(l)  
  
