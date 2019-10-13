//Binary Search--Recursive method
#include<stdio.h>
int BinarySearch(int a[],int n,int x, char flag)
{
 int low=0, high=n-1, result=-1;

  while(low<=high)
  {
    int mid=low+(high-low)/2;
    if(x==a[mid])
    {
       result=mid;
       if(flag)
       high=mid-1;// Left Search
       else low=mid+1;//Right Search
    }
    else if(x<a[mid]) high=mid-1;
    else low=mid+1;

  }
  return result;
}
int main()
{
  int a[]={1,2,3,4,4,4,5,5,5,6,7,7,7,8,9};
  int n=15,x;
  printf("Enter the number:- ");
  scanf("%d",&x);
  int FirstSearch = BinarySearch(a,n,x,1);
  if(FirstSearch==-1)
  {
      printf("The number %d is not found!!!",x);
  }
  else
  {
      int LastSearch= BinarySearch(a,n,x,0);
      printf("Count of %d is %d",x,LastSearch-FirstSearch+1);
  }

return 0;
}
