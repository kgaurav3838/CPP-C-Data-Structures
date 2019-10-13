// Stack - reverse string implementation.
#include<iostream>
#include<cstdio>
#include<cstring>  //or <string.h>
#include<stack>  //stack from STL
using namespace std;
void ReverseString(char *C, int n)
{
    int i;
    stack<char> S;  // creating stack object
    for(i=0;i<n;i++)
    {
        S.push(C[i]);
    }
    for(i=0;i<n;i++)
    {
        C[i]=S.top();// Overwrite char at index i --It will reverse the stack
        S.pop();     // then perform pop
    }
}
int main()
{
    char C[50];
    cout<<"Enter the string: ";
    gets(C);
    ReverseString(C,strlen(C));
    cout<<"\nReverse string is: "<<C;
    return 0;
}
