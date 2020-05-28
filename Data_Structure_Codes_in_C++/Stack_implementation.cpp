#include<iostream>
using namespace std;
class stack 
{
    public:
    int top;
    int a[10];
    stack()
    {
        top=-1;
    }
    int is_full()
    {
        if(top==10)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int is_empty()
    {
        if(top==-1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int push(int x)
    {
        if(!is_full())
        {
            top++;
            a[top]=x;
        }
    }
    int pop()
    {
        if(!is_empty())
        top--;
    }
    int display()
    {
        for(int i=top;i>=0;i--)
        {
            cout<<a[i];
        }
    }
};
int main()
{
    char c;
    int no,ch;
    stack s;
    do
    {
        cout<<"\n enter ur choice: \n 1.push \n 2.pop \n 3.display";
        cin>>ch;
        switch(ch)
        {
            case 1:
              cout<<"\n enter no";
              cin>>no;
              s.push(no);
              break;
            case 2:
              s.pop();
              break;
            case 3:
              s.display();
              break;
        }
        cout<<"\n do u want to continue?";
        cin>>c;
    }
    while(c=='y');
}