#check elements of array present in 1st is in 2nd or not:

def chk():

 l1=[10,11,12,13]
 l2=[12,13,14,15]
 
 for i in range(0,len(l1)):
  
  for j in range(0,len(l2)):
   
   if l1[i] not in l2:
    ele=l1[i]
    print(ele)
    break	
    
chk()

