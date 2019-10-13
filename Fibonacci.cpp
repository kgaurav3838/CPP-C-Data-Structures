#include<iostream>
using namespace std;
void fibo(int a[])
{
    int n=0;
    while(n<21){
    if(n==0 || n==1){
            a[n]=n;
        cout<<a[n]<<" ";
        n++;
    }
    else
    {
        a[n]=a[n-1]+a[n-2];
        cout<<a[n]<<" ";
        n++;
    }
    }
}

int main()
{
    int i,a[20]={};
    cout<<"Fibonacci series:- \n";
    fibo(a);

    return 0;
}
