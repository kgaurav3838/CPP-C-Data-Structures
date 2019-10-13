#include<stdlib.h>
int heloo(int *x)
{
printf("x1=%d\n",*x);
*x=*x+1;
printf("x=%d\n",*x);
return x;

}
void main()
{
int a=11;
//int a=10;
/*printf("%d\n",a);
printf("%d\n",a[0]);
printf("%d\n",*a);
printf("%d\n",&a);
printf("%d\n",&a[0]);*/
heloo(&a);
printf("a=%d",a);
}

