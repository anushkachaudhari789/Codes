#Divide list into parts and print part which have biggest sum

def divide():
 l=[]
 
 N=input("enter size of list")
 M=input("dividation parts")
 print("enter elements of list")
 for i in range(0,5):
  l.append(int(input()))
 print(l) 
 
 a=[]
 sum1=0
 for i in range(0,3):
  a.append(l[i])
  sum1=sum1+a[i]
 print(a) 
 print(sum1)
  
 b=[]
 sum2=0
 
 b.append(l[3])
 sum2=sum2+b[0]
 print(b)
 print(sum2)

 c=[]
 sum3=0
 
 c.append(l[4])
 sum3=sum3+c[0]  
 print(c) 
 print(sum3)
 
 if sum1>sum2: 
  if sum1>sum3:
   print("biggest sum is:")
   print(sum1)
  elif sum2>sum3:
   print("biggest sum is:")
   print(sum2)
  
divide()  


