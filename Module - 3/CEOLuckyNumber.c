/*
A company CEO is very curious on lucky numbers. One day he decided to know the all employees
lucky numbers. A lucky number is calculate using date of birth Lucky Number:
Date of Birth (DDMMYYYY)- 31081988
Find sum of all digits of given DoB
Repeat step2 until the DOB turned into single digit
For example:
31081988 =&gt; 3+1+0+8+1+9+8+8
38 =&gt; 3+8
11 =&gt; 1+1
2
Please help the CEO to find the lucky number by developing the C function
Find_Lucky_Number().
Find_Lucky_Number() function take the string as argument and return the lucky number
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int Find_Lucky_Number(char DOB[])
{
    long int dob=atol(DOB);
    printf("%d\n",dob);
    int lucky=0;
    int temp;
    int rem;
    while(dob>=10)
    {
        temp=dob;
        lucky=0;
        while(temp)
        {
            rem = temp%10;
            temp=temp/10;
            lucky=lucky+rem;
        } 
        dob=lucky;
       // printf("%d\n",dob);
    }
        return dob;
}

int main(void)
{
    char DOB[8];
    printf("Enter your Date of Birth: ");
    gets(DOB);
    printf("The lucky number is: %d",Find_Lucky_Number(DOB));
}