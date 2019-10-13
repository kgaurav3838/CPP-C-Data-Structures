//Linked list

#include<iostream>
//#include<conio.h>
using namespace std;
struct node
 {
     int data;
     node* next;
 };
 node* head;
 int main()
 {
     head=NULL;
     cout<<"Hello";
     node* temp=new node;
     temp->data=10;
     temp->next=NULL;
     cout<<"\nData stored is "<<temp->data;
     return 0;
 }
