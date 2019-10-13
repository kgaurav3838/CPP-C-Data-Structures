#include<stdio.h>

int main()
{
  static int i;
  printf(" \nValue of i after static int is %d",i);
  for(i;i<8;i++)
  {
      printf(" \nValue of i= %d",i);
      switch(i++)
      {
          case 0 : i |=2; printf(" \nValue of i after switch case 0= %d",i);
          case 1 : i+=2;  printf(" \nValue of i after switch case 1= %d",i);
          case 7 : i*=2;  printf(" \nValue of i after switch case 7= %d",i);
          default :i<<=2; printf(" \nValue of i after default switch = %d",i);
      }
      printf("\nFinal i= %d",i);
  }

  return 0;
}
