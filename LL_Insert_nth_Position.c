//INSERTION OF NODES AT THE nth position AND IT'S DISPLAY
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node* head;
void insert(int x,int n)
{
    int i;
    struct node* temp1=(struct node*)malloc(sizeof(struct node));
    temp1->data=x;
    temp1->next=NULL;
    if(n==1)
    {
      temp1->next=head;
      head=temp1;
      return; // return to the called function or to stop further continuation of this function
    }
    struct node* temp2;
    temp2=head;
    for(i=0;i<n-2;i++)
    {
        temp2=temp2->next;  //Used for traversing the node utpo n
    }
    temp1->next=temp2->next;
    temp2->next=temp1;
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
    printf("\n");
}
int main()
{
    head =NULL;
    /* int x,
    printf("Enter the number:- ");
    scanf("%d",&x);  */
    insert(4,1);
    insert(5,2);
    insert(2,1);
    insert(3,2);
    insert(9,4);
    insert(8,1);
    insert(7,5);
    print();
    return 0;
}
