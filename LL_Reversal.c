//INSERTION OF NODES AT THE nth position AND IT'S DISPLAY
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node* head;  //Global variable
insert(int x)
{
    struct node *head2;
    struct node *temp=(struct node*)malloc(sizeof(struct node));
     temp->data=x;
     temp->next=NULL;
     if(head==NULL)
     {head=temp;}
     else
    {
        struct node* temp1=head;
        while(temp1->next!=NULL)  //DOUBTS  why not-- while(temp1!=NULL)
        {
            temp1=temp1->next;
        }
        temp1->next=temp;
        //return;
    }
    return head2;

}
void reverseLL()
{
    int i;
    struct node *current,*prev,*next;;
    current=head;
    prev=NULL;
    while(current!=NULL)
    {
     next=current->next;
     current->next=prev;
     prev=current;
     current=next;
    }
    //temp1=head;

   head=prev;
   //return head;
}
void reverseLL2(struct node* q)
{
    //struct node* temp=(struct node*)malloc(sizeof(struct node));
    if(q->next==NULL)
    {
        head=q;
        return;
    }
    reverseLL2(q->next);
    struct node* temp=q->next;// Reversing LL using recursive method
    temp->next=q;
    //q->next->next=q;//this can be replaced above two stmnt
    q->next=NULL;
}
void print()
{
    struct node* temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
  printf("\n");
}
void print1(struct node *p)
{
    if(p==NULL) return;  //need to return whenever there's recursive call
    print1(p->next); //Recursive call

    printf("%d ",p->data);
}

int main()
{
    int x;
    head=NULL;
    insert(2);insert(3);insert(4);insert(5);
    printf("Linked List:- ");
    print();
    printf("Printing LL in reverse order:- ");
    print1(head);
    reverseLL();  //Reversal using iterative
    printf("\nLinked List in reverse order using iterative:- ");
    print();
    reverseLL2(head);  //Reversal of LL using recursive
    printf("Linked List in reverse order using recursive:- ");
    print();
    return 0;
}
