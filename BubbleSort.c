#include<stdio.h>
void BubbleSort(int a[], int n)
{
	int i,j,flag,count=0;
	for(i=0;i<n;i++)
	{
		flag=0;
		for(j=0;j<n-1;j++)
		{

		if(a[j] > a[j+1])
		{
			flag=1;
		int temp = a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
	    }
	   }

	   if(flag==0) break; //To avoid redundand loop
	    count++; // To count number of loop passed
	}
	printf("count= %d\n",count);
}
int main()
{
int a[]={4,3,5,1,9,8,6};
int i,n=7;
BubbleSort(a,n);
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
system ( "PAUSE" );
return 0;
}
