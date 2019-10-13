//Binary Search--Recursive method

#include<stdio.h>
int BinarySearch(int a[],int low,int high,int x)
{
    int mid=low+(high-low)/2;
    if(low>high)
        return -1;
    if(x==a[mid])
        return mid;
    else if(x<a[mid])
        return BinarySearch(a,low,mid-1,x);
    else return BinarySearch(a,mid+1,high,x);
}
int main()
{
  int a[]={1,2,3,4,5,6,7,8,9};
  int n=9,x,low,high;
  printf("Enter the number ");
  scanf("%d",&x);
  low=0;
  high=n-1;
  int index=BinarySearch(a,low,high,x);
  if(index==-1)
    printf("Not Found!!!\n");
  else
  printf("Found %d at %d position",x,index+1);
    return 0;
}
