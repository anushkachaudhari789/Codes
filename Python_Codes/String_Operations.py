
#string concat:
s1=str(input("enter string1"))
s2=str(input("enter string1"))
s1=s1+s2
print(s1)


#string copy:
s1=str(input("enter string1"))
s2=s1 
print(s2)


#string compare:
s1=str(input("enter string1"))
s2=str(input("enter string2"))
flag=0
for i in range(0,len(s1)):
 for j in range(0,len(s2)):
  if s1[i]==s2[j]:
   flag=1
  else:
   flag=0
if flag==1:
 print("equal")   
else:
 print("not equal") 
 

#substring

s1=str(input("enter string1"))
s2=str(input("enter string2"))
flag=0
for i in range(0,len(s1)):
 for j in range(0,len(s2)):
  if s1[i] in s2:
   flag=1
  else:
   flag=0
if flag==1:
 print("substring")   
else:
 print("not substring") 
 

#palindrome:
s1=str(input("enter string1"))
flag=0
l=len(s1)
n=int(len(s1)/2)
for i in range(0,n,1):
 for j in range(l-1,n,-1):
  if s1[i]==s1[j]:
   flag=1
  else:
   flag=0  
if flag==1:
 print("palindrome")   
else:
 print("not palindrome")   																	
  


#String Reverse
st1=str(input("enter string"))
for i in range(len(st1)-1,-1,-1):
 #print(i)
 print(str(st1[i]),end='')
print("\n") 

no=str(input("enter no."))
for i in range(len(no)-1,-1,-1):
 print(str(no[i]),end='')
 
 
