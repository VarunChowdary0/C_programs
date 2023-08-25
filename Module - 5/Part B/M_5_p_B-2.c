/*
Explain the following
functions through a sample
program which reads a file
“test.txt” .
a) ftell()
b) fseek()
c) rewind()
*/

/*
    a. ) ftell() :
        It is an standard library function used to return the 
        current position of curser in the given file stream.
        <syntax>
        lont int position = ftell(filePointer)

    b. ) fseek() :
        It is a standard library function used skip 'n' characters
        in a file and operate with the next ones.
        <syntax>
        fseek(filePointer , n , SEEK_SET ) 
    c. ) rewind() :
        It is a standard library function used to reset the position 
        of the curser to the starting point.
        <syntax>
        rewind(filePointer) 
*/

            #include<stdio.h>
            int main(void)
            {
                FILE *fp;
                long int position;
                int n;
                char ch;
                fp = fopen( "sample.txt","r");
                if( fp == NULL)
                {
                    printf("File not found");
                }
                else
                {
                    printf("Enter n: ");
                    scanf("%d",&n);
                    fseek(fp,n,SEEK_SET);
                    position=ftell(fp);
                    printf("Current file position : %ld\n",position);
                    while ((ch=(fgetc(fp)))!=EOF)
                    {
                        printf("%c",ch);
                    }
                    rewind(fp);
                    position=ftell(fp);
                    printf("\nCurrent file position after using rewind : %ld\n",position);
                }
                fclose(fp);
            }