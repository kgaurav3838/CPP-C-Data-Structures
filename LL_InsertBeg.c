//Linked list: Inserting at the beginning
//use "typedef node* node" to avoid using writing struct with node*

#include<stdio.h>
#include<stdlib.h>
struct node
 {
     int data;
     struct node* next;
 };
//struct node* head;  //Global Variable
struct node* insert(int x,struct node *head)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    (*temp).data=x;
    temp->next=head;
    head=temp;
    return head;
}
void print(struct node *head)
{
    //struct node* temp=head;
    printf("List is:- ");
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;  // Another way of pointing data in the nodes.
    }
}
 int main()
 {
     struct node* head; //Local variables
     int n,x,i;
     head=NULL;
     printf("How many numbers want to insert at the beginning:- ");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
       printf("\nEnter number:- ");
       scanf("%d",&x);
       head=insert(x,head);
       print(head);
     }
     return 0;
 }
