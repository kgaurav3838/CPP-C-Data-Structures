//Linked list: Inserting at the beginning
//use "typedef node* node" to avoid using writing struct with node*

#include<stdio.h>
#include<stdlib.h>
struct node
 {
     int data;
     struct node* next;
 };
 typedef struct node* node;
node head;
void insert(int x)
{
    node temp=(node*)malloc(sizeof(node));
    temp->data=x;
    temp->next=head;
    head=temp;
}
void print()
{
    node temp=head;
    printf("List is:- ");
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;  // Another way of pointing data in the nodes.
    }
}
 int main()
 {
     int n,x,i;
     head=NULL;
     printf("How many numbers want to insert at the beginning:- ");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
       printf("\nEnter number:- ");
       scanf("%d",&x);
       insert(x);
       print();
     }
     return 0;
 }
