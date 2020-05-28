#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
};
class student:public node
{
public:
    node *head;
    int rollno;
    student()
    {
      //  head=new node();
        head=NULL;
    }
    void slist()
    {
      if(head==NULL)
        {
            cout<<"entre the roll no";
            cin>>rollno;
            cout<<rollno;
            node *newnode=new node;
            cout<<"\n enter data";
            newnode->data=rollno;
            newnode->next=NULL;
            head=newnode;
            cout<<"\n roll is:"<<head->data;
            cout<<head->data;
        }
       /* else
        {
            node *temp;
            temp=head;
            while(temp->next!=NULL)
            {
            temp=temp->next;
            }
            node *newnode=new node;
            cout<<"\n enter data";
            cin>>newnode->data;
            temp->next=newnode;
            cout<<"\n roll is:"<<newnode->data;
            newnode->next=NULL;
        }*/
   }
};
int main()
{
    student r;
    r.slist();
}
