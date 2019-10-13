//Linked list

#include<stdio.h>
  typedef struct node
 {
     int data;
     struct node* next;
 }node;
 //typedef struct node* node;
 typedef node* list;  // list is another type
 list head; // we can now onwards use type list to create new variables of type list
 int main()
 {
     head=NULL;

     return 0;
 }
