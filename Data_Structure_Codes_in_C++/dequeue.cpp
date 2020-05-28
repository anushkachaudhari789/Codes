#include<iostream>
using namespace std;
class node
{
    public:
    node *front,*rear,*next,*prev;
    int data;
};
class dequeue:public node
{
    public:
    dequeue()
    {
        front=rear=NULL;
    }
    node *temp;
    void enrear(int r1)
    {
        node *newnode=new node;
        newnode->data=r1;
        if(rear==NULL)
        {
            front=rear=newnode;
            newnode->next=NULL;
            newnode->prev=NULL;
        }
        else
        {
            newnode->prev=rear;
            rear->next=newnode;
            newnode->next=NULL;
            rear=newnode;
        }
    }
    void enfront(int r1)
    {
        node *newnode=new node;
        newnode->data=r1;
        if(front==NULL)
        {
            front=rear=newnode;
            front->next=NULL;
            front->prev=NULL;
        }
        else
        {
            newnode->next=front;
            front->prev=newnode;
            front=newnode;
        }
    }
    void defront()
    {
       if(front==NULL)
       {
           cout<<"\n q is empty";
       }
       else
       {
           front=front->next;
           front->prev=NULL;
           delete(front);
       }
    }
    void derear()
    {
        if(rear==NULL)
        {
            front=NULL;
            cout<<"\n q is empty";
        }
        else
        {
             delete(rear);
             rear->prev->next=NULL;
            rear=rear->prev;
            
         }
        
    }
    void display()
    {
        if(front==NULL)
        {
            cout<<"\n q is empty";
        }
        else
        {
            temp=front;
            while(temp!=NULL)
            {
                cout<<temp->data;
                temp=temp->next;
            }
        }
    }
};
int main()
{
    dequeue d;
    int ch,roll;
    char c;
    do
    {
        cout<<"\n enter ur choice: \n 1.insrt from rear \n 2.display \n 3.dlt fron front \n 4.insrt from front \n 5.dlt from rear";
        cin>>ch;
        switch(ch)
        {
            case 1:
              cout<<"\n enter roll";
              cin>>roll;
              d.enrear(roll);
              break;
            case 2:
              d.display();
              break;
            case 3:
              d.defront();
              break;
            case 4:
              cout<<"\n enter roll";
              cin>>roll;
              d.enfront(roll);
              break;
            case 5:
              d.defront();
              break;
        }
        cout<<"\n do u want to continue?";
        cin>>c;
    }while(c=='y');
}