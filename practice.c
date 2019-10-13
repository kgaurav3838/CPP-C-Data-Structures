#include<stdio.h>
//#include<cstack>
#include<stdlib.h>

int main()
{
// array declaration
int num[4][4] = {{32, 8, 4, 1},{4},2};
int size = sizeof(num)/ sizeof(int);    // 32+8+4+1= 45
printf("%d \n",*num);
printf("%d \n",*(*(num+2)));
printf("The size of the array is %d\n", size);
printf("The value of element in the array at index 5 is %d ",
                                    num[4]);

return 0;

}
