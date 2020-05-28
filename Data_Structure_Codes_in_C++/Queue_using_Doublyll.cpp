#include<iostream>
using namespace std;
class node
{
    public:
    node *front,*rear,*next,*prev;
    int data;
};
class queue:public node
{
    public:
    node *temp;
    queue()
    {
        front=rear=NULL;
    
    }
    void insert(int r1)
    {
        node *newnode=new node;
        newnode->data=r1;
        if(rear==NULL)
        {
            front=rear=newnode;
            newnode->next=NULL;
           // newnode->prev=NULL;
        }
        else
        {
            temp=rear;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
         //   newnode->prev=temp;
            temp->next=newnode;
            newnode->next=NULL;
        }
    }
    void deletef()
    {
        if(front==NULL)
        {
            cout<<"\n q is empty";
        }
        else
        {
        
          front=front->next;
          delete(front);
        }
    }
    void display()
    {
         if(front==NULL)
        {
            cout<<"\n q is empty";
        }
        temp=front;
        while(temp!=NULL)
        {
            cout<<temp->data;
            temp=temp->next;
        }
    }
};
int main()
{
    queue q;
    int ch,r1;
    char c;
    do
    {
        cout<<"\n enter ur choice: \n 1.insert \n 2.delete \n 3.display";
        cin>>ch;
        switch(ch)
        {
            case 1:
              cout<<"\n enter roll";
              cin>>r1;
              q.insert(r1);
              break;
            case 2:
             cout<<"\n deleted from front";
             q.deletef();
             break;
            case 3:
              q.display();
        }
        cout<<"\n do u want to continue?";
        cin>>c;
        }while(c=='y');
}