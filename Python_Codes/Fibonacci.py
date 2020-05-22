#print fibvalue of nth no.

fibs=[0,1]
def fib(n):
 if n<=0:
  print("wrong input")
 elif n<=len(fibs):
  r=fibs[n-1]
  return r

 else:
  tempfib=fib(n-1)+fib(n-2)
  fibs.append(tempfib)  
  return tempfib
  
print(fib(7))


 
#print fibonacci series for n numbers

nt=int(input("enter how many terms"))
count=0
fib1=0
fib2=1

if nt==0:
 print("wrong input")
 
elif nt==1:
 print("fibonacci series upto",nt,":")
 print(fib1)
 
else:
 print("fibonacci series for",nt,"terms is:")
 while count < nt:
  print(fib1)
  nth=fib1+fib2
  fib1=fib2
  fib2=nth
  count=count+1
  
