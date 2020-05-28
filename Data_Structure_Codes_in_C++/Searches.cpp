#include<iostream>
using namespace std;
class search
{
    public:
    int a[10];
    int no,n,i,j;
    void read()
    {
        cout<<"\n how many?";
        cin>>n;
        cout<<"\n enter elements";
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cout<<"\n elements are:";
        for(j=0;j<n;j++)
        {
            cout<<a[j];
        }
    }
    void linear()
    {
        int flag=0;
        cout<<"\n enter no do u want to srch";
        cin>>no;
        for(i=0;i<n;i++)
        {
            if(a[i]==no)
            {
                flag=1;
                break;
            }
            else
            {
                flag=0;
            }
        }
        if(flag==1)
        {
            cout<<"\n element is present:"<<a[i];
        }
        else
        {
            cout<<"\n element is not present";
        }
    }
    void binary()
    {
        int high=n-1;
        int low=0;
        int mid,flag=0;
        cout<<"\n enter elemnt do u want to srch";
        cin>>no;
        while(high>=low && flag==0)
        {
            mid=(high+low)/2;
            if(no==a[mid])
            {
                flag=1;
                break;
            }
            else if(no<a[mid])
            {
                high=mid-1;
                
            }
            else if(no>a[mid])
            {
                low=mid+1;
               
            }
        }
        if(flag==1)
        {
            cout<<"\n found";
        }
        else
        {
            cout<<"\n not found";
        }
    }
};
int main()
{
    search s;
    int ch;
    char c;
    do
    {
        cout<<"\n enter ur choice: \n 1.read \n 2.linear search \n 3.binary search";
        cin>>ch;
        switch(ch)
        {
            case 1:
              s.read();
              break;
            case 2:
              s.linear();
              break;
            case 3:
              s.binary();
              break;
        }
        cout<<"\n do u want to continue?";
        cin>>c;
    }while(c=='y');
}