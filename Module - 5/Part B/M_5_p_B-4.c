/*
Write the syntax of the
following file I/O functions
and Explain every option in
each function with suitable
example :
a. fopen()
b. fclose()
c. fread()
d. fwrite()
*/
/*
    a. )fopen():
                This function returns a file pointer.
            <syntax> 
                ptr  =  fopen("FileName.txt",method)
    b. )fclose():
                This function is used to close the file.
            <syntax>
                fclose(filePointer)
    c. )fread():
                This standard library function is used to
                read binary data from a file.
            <syntax>
                fread(pointer_where_to_store , sizeof(type) ,no_of_values_to_read , filePointer )
    d. )fwrite():
                This standard library function is used to
                write data into the file as binary.Data is stored in binary .
            <syntax>
                fwrite(pointer_of_data_array , sizeof(type) , no_of_values_to_write , filePointer )

*/

#include<stdio.h>

int main(void)
{
    FILE *fp;
    int data_1[10];
    int data_2[10]={1,2,3,4,5,6,7,8,9,0};
    fp = fopen("sample_2.txt","r+");
    if(fp == NULL)
    {
        printf("File not found");
    }
    else
    {
        fwrite(data_2,sizeof(int),10,fp);
        fclose(fp);
        fp = fopen("sample_2.txt","r");
        fread(data_1,sizeof(int),10,fp);
        for(int i=0;i<10;i++)
        {
            printf("%-5d",data_1[i]);
        }
    }
    fclose(fp);
}