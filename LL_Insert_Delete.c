//INSERTION at the end node and DELETION OF NODES
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node* head;  //Global variable
void insert(int x)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
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

}
void deletee(int n)
{
    int i;
    struct node* temp1;
    temp1=head;
    for(i=0;i<n-2;i++)
    {
        temp1=temp1->next;  //Traversing till (n-)th list
    }
    struct node* temp2=temp1->next;// storing data of nth list
    temp1->next=temp2->next;  //storing data of (n+1)th list by skipping nth list
    free(temp2); //delete the nth node

}
void print()
{
    struct node* temp=head;
    printf("\n");
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }

}

int main()
{
    int x;
    head=NULL;
    insert(2);insert(3);insert(4);insert(5);
    print();
    printf("\nEnter the position to delete:- ");
    scanf("%d",&x);
    deletee(x);
    print();
    system ( "PAUSE" );
//printf ( "\nPress any key to exit . . ." );
//getch();
    return 0;
}
