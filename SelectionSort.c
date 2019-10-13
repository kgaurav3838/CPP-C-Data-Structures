#include<stdio.h>
int SelectionSort(int a[],int n)
{
    int i,j,min,count=0;
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
    {
        if(a[j] < a[min])
        { min=j; }
    }
        int temp=a[i];
        a[i]=a[min];
        a[min]=temp;
        count++;
    }
    return count;
}
int main()
{
    int a[]={4,3,5,1,9,7,8,6,2};
    int i,n=9;
    int count=SelectionSort(a,n);
    printf("Sorted array is :-\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nNumber of loop passed= %d",count);
    return 0;
}
