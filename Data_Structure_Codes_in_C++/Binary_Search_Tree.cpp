#include<iostream>
using namespace std;
class node
{
public:
    node *left,*right;
    int data;
}*root=NULL;
class bst:public node
{
public:
    node *temp;
    void create(int roll)
    {

        node *newnode=new node;
        newnode->data=roll;
        newnode->left=NULL;
        newnode->right=NULL;
        if(root==NULL)
        {
            root=newnode;
        }
        else
        {
            temp=root;
            while(temp!=NULL)
            {
        if(newnode->data<=temp->data)
        {
            if(temp->left==NULL)
            {
                temp->left=newnode;
                break;
            }
            else
            {
                temp=temp->left;
            }
        }
        else if(newnode->data>temp->data)
        {
            if(temp->right==NULL)
            {
                temp->right=newnode;
                break;
            }
            else
            {
                temp=temp->right;
            }
        }
     }
    }
   }
    void display(node *root1)
    {
        if(root1!=NULL)
        {
            cout<<root1->data<<" "<<"\n";
            display(root1->left);
            display(root1->right);
        }
    }
};
int main()
{
    bst s;
    int c;
    int roll;
    char ch;
    do
    {
        cout<<"\n choice:\n1.create\n2.display";
        cin>>c;
        switch(c)
        {
        case 1:
        cout<<"enter roll";
        cin>>roll;
        s.create(roll);
        break;
        case 2:
        s.display(root);
        break;
        }
        cout<<"do u want to continue?";
        cin>>ch;
    }while(ch=='y');
}

