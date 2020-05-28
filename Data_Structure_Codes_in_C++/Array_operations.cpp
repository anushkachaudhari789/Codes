/*
1: search in array
#include<iostream>
using namespace std;
int main()
{
     int i,no;
     int a[10];
     cout<<"\n enter elements";
     for(i=0;i<10;i++)
     {
         cin>>a[i];
     }
     cout<<"\n elements are";
     for(i=0;i<10;i++)
     {
         cout<<a[i];
     }
     cout<<"\n enter no do u want to srch";
     cin>>no;
     int flag;
     for(i=0;i<10;i++)
     {
        flag=0;
         if(no==a[i])
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
         cout<<"no is present";
     }
     else
     {
         cout<<"not present";
     }
}
*/

/*
2:sum of even and odd elements in array:

#include<iostream>
using namespace std;
int main()
{
    int i;
    int a[10];
    int even=0;
    int odd=0;
    int pos=0;
    int neg=0;
    int zero=0;
    cout<<"\n enter no";
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
        {
            even++;
            cout<<"\n sum of even:"<<even;

        }
        if(a[i]%2!=0)
        {
            odd++;
            cout<<"\n sum of odd:"<<odd;

        }
         if(a[i]>0)
        {
            pos++;
            cout<<"\n sum of pos:"<<pos;

        }
        if(a[i]<0)
        {
            neg++;
            cout<<"\n sum of neg:"<<neg;

        }
        if(a[i]==0)
        {
            zero++;
            cout<<"\n sum of zero:"<<zero;
        }
    }

}
*/

/*
3: print array elements in reverse order:

#include<iostream>
using namespace std;
int main()
{
    int i,j=0;
    int a[10];
    int b[10];
    cout<<"\n enter elements";
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
     for(i=0;i<10;i++)
    {
    cout<<"\n"<<a[i];
    }
    for(i=9;i>=0;i--)
    {
        b[i]=a[j];
        j++;
    }

    cout<<"\n elements in reverse order";
    for(i=0;i<10;i++)
    {
        cout<<b[i];
    }
}
*/

/*
4: sum and multiplication of array elements

#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int sum=0,mul=1;
    int a[10];
    cout<<"\n enter elements";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
     }
    cout<<"\n sum is:"<<sum;
    for(i=0;i<5;i++)
    {
         mul=mul*a[i];
    }
    cout<<"\n multiplication is:"<<mul;
}
*/

/*
5:Matrix

#include<iostream>
using namespace std;
int main()
{
    int i=0,j=0;
    int a[2][2];
    cout<<"\n enter";
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
          cout<<a[i][j];
        }
    }

}
*/

/*
6:print min and max element from array:
#include<iostream>
using namespace std;
int main()
{
    int i;
    int a[10];
    int max1=0,min1=10;
    cout<<"\n enter";
    for(i=0;i<3;i++)
    {
        cin>>a[i];
        if(a[i]>max1)
        {
            max1=a[i];
        }
    }
    cout<<"maximum:"<<max1;
     for(i=0;i<3;i++)
    {
        if(a[i]<min1)
        {
            min1=a[i];
        }
    }
    cout<<"minimum:"<<min1;
}
*/

/*
7:check duplicate entries in array:

#include<iostream>
using namespace std;
int main()
{
    int i,j,flag=0;
    int a[4]={2,3,3,2};
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<4;j++)
        {
            if(a[i]==a[j])
            {
            flag=1;
            cout<<"\n same";
            }
            else
            {
                flag=0;
                cout<<"\n not same";
            }
        }
    }
}
*/

/*
8:swap array elements
#include<iostream>
using namespace std;
int main()
{
    int i,j,temp[4];
    int b[4],c[4];
    int a[4]={5,6,7,8};
    for(i=0;i<2;i++)
    {
         temp[i]=a[i];
         a[i]=c[i];
         c[i]=temp[i];
         cout<<"\n 1st array:"<<c[i];
    }

    for(i=2;i>=2;i++)
    {
        temp[i]=a[i];
        a[i]=b[i];
        b[i]=temp[i];
        cout<<"\n 2nd array:"<<b[i];
}
    }

*/

/*
9:dlt elements from array:
#include<iostream>
using namespace std;
int main()
{
    int a[5];
    int i,j,no;
    cout<<"\n enter elements";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    cout<<"\n elements:";
    for(i=0;i<5;i++)
    {
        cout<<a[i];
    }
    int counter=0;
   cout<<"\n enter no to be dlt";
    cin>>no;
    for(i=0;i<5;i++)
    {
        if(a[i]==no)
        {
            for(j=i;j<4;j++)
            {
                a[j]=a[j+1];
            }
            cout<<"\n after dln";
            for(j=0;j<4;j++)
            {
                cout<<a[j];
            }

            }
        }
        int no1,pos;
    cout<<"\n enter no to be add";
    cin>>no1;
    cout<<"\n enter position";
    cin>>pos;
    for(i=5;i>pos;i--)
    {

        a[i]=a[i-1];

    }
    a[pos]=no1;
            cout<<"\n after addn";
            for(j=0;j<5;j++)
            {
                cout<<a[j];
            }

}
*/
