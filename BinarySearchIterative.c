//Binary Search--Recursive method

#include<stdio.h>
int BinarySearch(int a[],int n,int x)
{
  int low=0, high=n-1;
    while(low<=high)
    {
    int mid=low+(high-low)/2;
    if(x==a[mid])
        return mid;
    else if(x<a[mid])
        high=mid-1;
    else low=mid+1;
    }
    return -1;
}
int main()
{
  int a[]={1,2,3,4,5,6,7,8,9};
  int n=9,x;
  printf("Enter the number ");
  scanf("%d",&x);
  int index=BinarySearch(a,n,x);
    if(index==-1)
    printf("Not Found\n");
  else
  printf("Found %d at %d position",x,index+1);
    return 0;
}
