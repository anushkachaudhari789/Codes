#convert decimal no. to binary

n=int(input("enter decimal no."))
binary=format(n,"b")
print(binary)

l=[]
l1=l.append(binary)
print(l1)

c=binary[0]
counter=0
print("c",c)

for i in range(1,len(binary)):
 
 if i%2==0:
  counter+=1
 else: 
  b=binary.replace(binary[i],'0',counter)
