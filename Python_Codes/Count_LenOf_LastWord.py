def fun(s):
 cnt=0
 for i in range(l):
  if str1[i]==" ":
   cnt=0
   
  else:
   cnt+=1
   
 return(cnt)  
 
str1=input("enter string")
l=len(str1)
print(str1)
count=fun(str1)
print("final cnt",count)

