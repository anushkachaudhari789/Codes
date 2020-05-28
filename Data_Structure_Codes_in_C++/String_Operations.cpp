#include<iostream>
using namespace std;
class String
{
    public:
    char str[20];
    int read()
    {
        cout<<"\n enter string";
        cin>>str;
    }
    int slength()
    {
        int i=0;
        while(str[i]!='\0')
        {
            i++;
        }
        //cout<<"\n length of string is:"<<i;
        return i;
    }
    int compare(String a)
    {
        int i=0,flag=0;
        if(slength()!=a.slength())
        {
             cout<<"\n strings are not equal in length";
             return 0;
        }
        else
        {
           while(str[i]==a.str[i] && str[i]!='\0' && a.str[i]!='\0')
        {
            i++;
        }    
        }
        if(str[i]=='\0' && a.str[i]=='\0')
        {
             cout<<"\n strings are equal";
        }
        else
        {
            cout<<"\n strings are not equal";
             return 0;
        }
    }
    int concat(String b)
    {
        int i=0;
        while(str[i]!='\0')
        {
            i++;
        }
        for(int j=0;b.str[j]!='\0';j++)
        {
            str[i]=b.str[j];
            i++;
        }
        str[i]='\0';
        cout<<"\n concanated string is:"<<str;
    }
    int substring(String d)
    {
        int j=0,flag=0;
        for(int i=0;str[i]!='\0' && d.str[j]!='\0';i++)
        {
           if(str[i]==d.str[j])
           {
             flag=1;
             j++;
           }
           else
           {
               flag=0;
               j=0;
            }
        }
           if(flag==1)
           {
               cout<<"\n it is substring";
           }
           else
           {
               cout<<"\n it is not substring";
           }
    }
    int reverse(String d)
    {
        int i=0;
        cout<<"\n reverse is:";
        while(str[i]!='\0')
        {
            i++;
        }
        for(int k=i-1;k>=0;k--)
        {
            cout<<str[k];
        }
    }
    int copy(String d)
    {
        int i,j=0;
        for(i=0;str[i]!='\0' ;i++)
        {
            d.str[j]=str[i];
            j++;
        }
        d.str[j]='\0';
        cout<<"copied string:"<<str;
    }
    int pali()
    {
        int i,j=0,k,m,flag=0;
        while(str[i]!='\0')
        {
            i++;
        }
        j=i/2;
        for(m=i;m>=j;m--)
        {
            if(str[k]==str[m])
            {
                flag=1;
                k++;
            }
            else
            {
                flag=0;
                k=0;
            }
        }
        if(flag==1)
        {
            cout<<"\n palindrome";
        }
        else
        {
            cout<<"\n not palindrome";
        }
    }
};
int main()
{
    String s,a,b,d;
    int ch;
    char c;
    do
    {
        cout<<"\n enter ur choice: \n 1.read \n 2.calculate length \n 3.compare \n 4.concatenate \n 5.substring \n 6.reverse \n 7.copy \n 8.palindrome";
        cin>>ch;
        switch(ch)
        {
            case 1:
              s.read();
              break;
            case 2:
              s.slength();
              break;
            case 3:
              a.read();
              s.compare(a);
              break;
            case 4:
              b.read();
              s.concat(b);
              break;  
            case 5:
              d.read();
              s.substring(d);
              break;
            case 6:
              s.reverse(d);
              break;
             case 7:
            //  s.read();
              s.copy(d);
              break; 
             case 8:
              s.pali();
              break;  
        }
        cout<<"\n do u want to continue?";
        cin>>c;
    }while(c=='y');
}