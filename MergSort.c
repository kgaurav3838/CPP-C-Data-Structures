// Merge Sort


#include<stdio.h>
void Merg(int left[],int right[],int a[],int nL,int nR)
{
    int i,j,k;

    i=0;j=0;k=0;
    while(i<nL&&j<nR)
    {
        if(left[i]<=right[j])
        {
            a[k]=left[i];
            i++; k++;
        }
        else
        {
           a[k]=right[j];
           k++;j++;
        }
    }
    while(i<nL)
    {
        a[k]=left[i];
        k++;i++;
    }
    while(j<nR)
    {
        a[k]=right[j];
        k++;j++;
    }
}
int MergSort(int a[],int n)
{
    int i,mid,nL,nR;

    if(n<2) return n;
    mid=n/2;
    int left[mid],right[n-mid];
    for(i=0;i<mid;i++)
    {
        left[i]=a[i];
    }
    for(i=mid;i<n;i++)
    {
        right[i-mid]=a[i];
    }
    MergSort(left,mid);
    MergSort(right,n-mid);
    nL=sizeof(left)/sizeof(int);
    nR=sizeof(right)/sizeof(int);
    Merg(left,right,a,nL,nR);
}

int main()
{
int a[]={4,3,5,7,1,9,8,6,0,2};
int i, n=sizeof(a)/sizeof(int);
MergSort(a,n);
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
return 0;
}
