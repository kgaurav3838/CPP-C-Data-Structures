// Example for getc() in C
// There is compilation error in the declaration int a[][] = {{1,2},{3,4}};
//Except the first dimension, every other dimension must be specified.
/* int arr[] = {5, 6, 7, 8} //valid
 int arr[][5] = {}; //valid
 int arr[][] = {}; //invalid
 int arr[][10][5] = {}; //valid
 int arr[][][5] = {}; //invalid */

#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int a[][2] = {{1,2},{3,4}};
    int i, j;
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            printf("%d ", a[i][j]);
    return 0;
}
