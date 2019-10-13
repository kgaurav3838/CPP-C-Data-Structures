//Factorial of a number
#include<iostream>
#include<cstdio>
using namespace std;
int fact(int a)
{
    //int n=a;
    if(a==0)
        return 1;
    else
        return a*fact(a-1);
}
int main()
{
int a;
cout<<"Factorial of a number!!\n";
cout<<"Enter the number:-";
cin>>a;
int b=fact(a);
cout<<"The factorial of "<<a<<" is "<<b<<"\n";
return 0;
}
