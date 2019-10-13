// Stack - reverse LL using stack implementation.
#include<iostream>
#include<stack>
#include<cstdio>
using namespace std;

typedef struct node
{
int data;
struct node *next;
}node;
node *head;
void reverse()
{
    if(head==NULL) return;
    stack<struct node*> S;
    node *temp2,*temp=head;
    while(temp!=NULL)
    {
      S.push(temp);
      temp=temp->next;
    }
      temp2=S.top();
      S.pop();
      head=temp2;
    while(!S.empty())
    {
        temp2->next=S.top(); //use to reverse the LL
        temp2=S.top();
        S.pop();

    }
    temp2->next=NULL;
}
void insert(int x)
{
    node *temp2,*temp1=new node();
    temp1->data=x;
    temp1->next=head;
    head=temp1;
}
print()
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
}
int main()
{
    int n,x;
 head=NULL;
 cout<<"How many numbers:- ";
 cin>>n;
 cout<<"Enter the numbers: ";
 for(int i=0;i<n;i++)
{
    cin>>x;
    insert(x);
}
cout<<"\nList is:- ";
print();
reverse();
cout<<"\nList is after reversal:- ";
print();
}
