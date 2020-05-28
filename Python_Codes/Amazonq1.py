class amazonq1:
    def q1(self,n,l):
	
	    #Mean:
        v=[]
        sum=0
        mean=0
       
        for i in range(0,n):
         sum+=l[i]
        mean+=sum/n
        v.append("%.6f" %mean)
		
        #Median:
        c=0   
        k=0
        m=sorted(l,reverse=True)
        
        if n%2!=0:  
         mid=n/2
         midi=int(mid)	
         median=l[midi]
         v.append("%.6f" %median)
         
        else:
         mid=n/2
         midi=int(mid)
         mid1=midi-1
         ele1=m[midi]
         ele2=m[mid1]
         sum1=ele1+ele2
         median=sum1/2
         v.append("%.6f" %median)
         
        #Mode:
         
        for i in m:
            if m.count(i)>=c:
                c=m.count(i)
                k=i
                
        v.append(str(k))   
        return(",".join(v))
    
            
a=amazonq1()
n=int(input("enter length of list"))
print("enter list elements")
lis=[]
for i in range(0,n):
    ele=int(input())
    lis.append(ele)
print(a.q1(n,lis))      

