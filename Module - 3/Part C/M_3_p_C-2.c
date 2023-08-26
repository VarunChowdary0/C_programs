/*
Find the output of the
following code.
*/

#include<stdio.h>
int main(void)
{
    int arr[3][2]={10,20,30,40,50,60};
    printf("%d",arr[2][2]); //  16
}


/*
chat GPT

In the declaration int arr[3][2] = {10, 20, 30, 40, 50, 60};, you have
initialized a 2D array arr with 3 rows and 2 columns. The initialization 
seems fine at first glance, but there's a problem: the array has only been 
defined with 3 rows and 2 columns, so accessing arr[2][2] is actually 
accessing an element that is out of bounds of the array. In C, array 
indices are 0-based, so arr[2][2] would be trying to access a non-existent element.

Attempting to access an element outside the bounds of an array leads to 
undefined behavior, which means that the code could produce any result or 
behavior – there's no guarantee what will happen.

In this specific case, you mentioned that the output 
you got is 16, but this value is a result of the undefined
behavior and is not a reliable or predictable outcome of the code. 
Different compilers or systems might produce different results, or 
even crash the program. It's important to make sure that array accesses 
are within bounds to avoid such issues.
*/