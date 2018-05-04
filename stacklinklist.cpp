#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
}*top=NULL;

void push(int num)
{
    struct node *temp;
    temp =new node;
    temp->data=num;
    if(top==NULL)
    {
        temp->next=NULL;
    }
    else
    {
        temp->next=top;
    }
    top=temp;
    cout<<"\nItem inserted";
}
void pop()
{
    if(top==NULL)
    {
        cout<<"\nStack is empty.";
    }
    else
    {
        struct node *temp =top;
        top=temp->next;
        delete(temp);
        cout<<"Element Deleted";
    }
}
void display()
{
    if(top==NULL)
    {
        cout<<"\nStack is empty.";
    }
    else
    {
        node *temp =top;
        while(temp->next!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<temp->data;
    }
}
int main()
{
    int choice,num;
    while(1)
    {
        cout<<"\n1. Push \n2. Pop \n3. Display \n Choose Option : ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Enter a number to insert : ";
            cin>>num;
            push(num);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;

        default:
            cout<<"\nChoose only 1, 2, 3";
        }
    }
}
