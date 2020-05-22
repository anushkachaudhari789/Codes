
def gcd():

 m=int(raw_input("enter any number"))
 print(m)
 n=int(raw_input("enter any number"))
 print(n)

 fm=[]
 for i in range(1,m+1):
  if m%i==0:
   fm.append(i)
 print(fm)  
 
 fn=[]
 for i in range(1,n+1):
  if n%i==0:
   fn.append(i)
 print(fn)  
 
 cf=[]
 for i in fm:
  if i in fn:
   cf.append(i)
 print(cf)
 
 return cf[-1]
print(gcd())


#euclids algorithm: 
 
 if m<n:
  (m,n)=(n,m)
 if m%n==0:
  return n
 else:
  return gcd(n,m%n) 