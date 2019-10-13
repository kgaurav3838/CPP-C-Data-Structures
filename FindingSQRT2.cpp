// Finding   nth root of a number
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    float n,i;
    printf("Enter the number ");
    scanf("%f",&n);
    for(i=0.001;i*i*i<n;i=i+0.001);
    printf("\nSqrt is %.2f",i);
    return 0;
}
