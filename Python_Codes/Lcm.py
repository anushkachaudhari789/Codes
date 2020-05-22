m=int(input("enter any number"))
n=int(input("enter any number"))
y=m*n

for i in range(1,y+1):          
 if (i%m==0 and i%n==0):
  print("lcm of",m,"&",n,"is:",i)
  break