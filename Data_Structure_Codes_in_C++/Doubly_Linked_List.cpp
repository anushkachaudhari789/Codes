 #include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next,*prev;
};
class dll:public node
{
    public:
    node *head,*temp,*temp1;
    dll()
    {
        head=NULL;
        prev=NULL;
    }
    void create(int roll)
    {
        if(head==NULL)
        {
            node *newnode=new node;
            newnode->data=roll;
            newnode->next=NULL;
            newnode->prev=NULL;
            head=newnode;
        }
        else
        {
            temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            node *newnode=new node;
            newnode->data=roll;
            temp->next=newnode;
            newnode->prev=temp;
            newnode->next=NULL;
        }

    }
    void ibeg(int r2)
    {
        node *newnode=new node;
        newnode->data=r2;
        newnode->prev=NULL;
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
    }
    void imid(int r3,int pos)
    {
        node *newnode=new node;
        newnode->data=r3;
        temp=head;
        for(int i=1;i<pos-1;i++)
        {
            temp=temp->next;
        }
        newnode->next=temp->next;

        temp->next->prev=newnode;
        temp->next=newnode;
        newnode->prev=temp;
        }
    void iend(int r4)
    {
        node *newnode=new node;
        newnode->data=r4;
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->prev=temp;
        newnode->next=NULL;
    }
    void dbeg()
    {
        temp=head;
        head=temp->next;
        temp->next->prev=NULL;
        delete(temp);
    }
    void dmid(int pos1)
    {
        temp=head;
        for(int i=1;i<pos1-1;i++)
        {
            temp=temp->next;
        }
        temp1=head;
        for(int i=1;i<=pos1-1;i++)
        {
            temp1=temp1->next;
        }
        temp->next=temp1->next;
        temp1->next->prev=temp;
        delete(temp1);
    }
    void dend()
    {
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->prev->next=NULL;
    }
    void display()
    {
        temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
    }
};
int main()
{
    dll d;
    int ch,r1,r2,r3,r4,pos,pos1;
    char c;
    do
    {
        cout<<"\n enter ur choice:\n 1.create \n 2.display \n 3.insrt at beg \n 4.insrt at mid \n 5.insrt at end \n 6 dlt at beg \n 7.dlt at mid \n 8.dlt at end";
        cin>>ch;
        switch(ch)
        {
            case 1:
               cout<<"\n enter roll";
               cin>>r1;
               d.create(r1);
               break;
            case 2:
               cout<<"\n linked list is:";
               d.display();
               break;
            case 3:
               cout<<"\n enter roll";
               cin>>r2;
               d.ibeg(r2);
               break;
            case 4:
               cout<<"\n enter roll";
               cin>>r3;
               cout<<"\n enter position";
               cin>>pos;
               d.imid(r3,pos);
               break;
            case 5:
                cout<<"\n enter roll";
                cin>>r4;
                d.iend(r4);
                break;
            case 6:
               d.dbeg();
               break;
            case 7:
               cout<<"\n enter position";
               cin>>pos1;
               d.dmid(pos1);
               break;
            case 8:
               d.dend();
               break;
        }
        cout<<"\n do u want to continue?";
        cin>>c;
    }while(c=='y');
}
