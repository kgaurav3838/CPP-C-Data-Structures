#include <stdio.h>
//#include <stdlib.h>

int main()
{
    int a=18;
    int *p;
    p=&a;
    *p=11;
    int **q;
    q=&p;
    int*** r;
    r=&q;
printf("a=%d\n",a);
printf("p=%d\n",p);
printf("q=%d\n",q);
printf("*q=%d\n",*q);
printf("**q=%d\n",**q);
printf("r=%d\n",r);
printf("*r=%d\n",*r);
printf("**r=%d\n",**r);
printf("***r=%d\n",***r);
    return 0;
}



//Output
/*
a=10
p=6356744
q=6356740
*q=6356744
**q=10
r=6356736
*r=6356740
**r=6356744
***r=10
*/
