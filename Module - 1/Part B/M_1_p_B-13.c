/*
Find the output of the
following code.
*/

#include<stdio.h>
void main()
{
    int k=8;
    int m=7;
    //k<m ? k++ :m=k; // error 
    k= k<m ? k++ : m;  // 7
    printf("%d",k);
}