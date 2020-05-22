#check no. is prime or not in given range:

def chkprime():
 flag=0
 k=0
 l=[]
 rng=int(input("enter range"))
 #num=int(input("enter num"))
 for i in range(1,rng):
  for j in range(i,rng):
   if i%j!=0:
    flag=1
    l.insert(k,i)	
   else:
    flag=0  
 if flag==1:
  print("prime")
  print(l)
 else:
  print("not prime")
chkprime()  