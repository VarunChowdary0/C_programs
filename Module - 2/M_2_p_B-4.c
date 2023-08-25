/*
Admission to a professional
course is subject to the
following conditions:
i. Marks in Mathematics
>=60
ii. Marks in Physics >= 50
Marks in Chemistry >=40
iii. Total in all three
subjects >=200
iv. Total in Mathematics
and Physics >=150
Given the marks in the
three subjects, Write a C
program to process the
application to list the
eligible candidates.
*/

#include<stdio.h>
int main (void)
{
    int mat,phy,che,total;
    printf("Enter marks:\nMATHS\tPHYSICS\tCHEMISTRY\n ");
    scanf("%d%d%d",&mat,&phy,&che);
    total=mat+phy+che;
    if(mat>=60)
    {
        if(phy>=50 && che>=40)
        {
            if(total>=200)
            {
                if(mat+phy >= 150)
                {
                    printf("Application is eligible.\n");
                }
                else
                printf("Application is not eligible, due to maths+physics criteria.\n");
            }
            else
            printf("Application is not eligible, due to total criteria\n");
        }
        else
        printf("Application is not eligible, due to physics and chemistry marks criteria\n");
    }
    else
    printf("Application is not eligible, due maths marks criteria.\n");
}