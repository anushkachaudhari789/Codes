def armstrong():
 num=int(input("enter num"))
 temp=num
 cube=0
 sum=0
 no=0
 while temp!=0:
  no=temp%10
  cube=no*no*no
  sum=sum+cube
  temp=temp/10
 print(int(sum))  
 if sum==num:
  print("armstrong no.")
 else:
   print("not an armstrong no.")
 
armstrong() 