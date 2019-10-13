#// Stack - Linked List based implementation.
#include<stdlib.h>
#include<stdio.h>
typedef struct node
{
    int data;
    struct node *next;
}node;
node *top;
void push(int x)
{
    node *temp=(node*)malloc(sizeof(node));
    temp->data=x;
    temp->next=top;
    top=temp;
}
void pop()
{
    if(top==NULL)
       {printf("Stack is empty.\n");
        return;}
    node *temp=top;
    top=temp->next;
    free(temp);
}
void print()
{
    node *temp=top;
    printf("\nList is:- ");
    while(temp!=NULL)
    {
        printf("%d ", temp->data);
        temp=temp->next;
    }
}
int main()
{
    top=NULL;
    push(3);print();
    push(2);print();
    pop();print();
    pop();print();
    pop();
    push(1);print();
    return 0;
}
