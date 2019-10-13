//Insertion Sort
#include<stdio.h>
void InserSort(int a[],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		int j=i;
		//int value=a[i];
		while(j!=0)  //or j>0
		{
			if(a[j] < a[j-1])
           {

				temp=a[j-1];
				a[j-1]=a[j];
				a[j]=temp;
           }
            j=j-1;
		}

	}
}


int main()
{
    int a[]={1,8,2,6,4,3,5,0,9,7};
    int i,n=10;
    InserSort(a,n);
    printf("Sorted array is :-\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
