/*
Explain the meaning and
purpose of the following:
a. struct keyword
b. typedef keyword
c. sizeof operator
*/

/*
    a. ) struct keyword :
        struct keyword is used ot define a structure .
        EX:
        {
            struct book
            {
                char name[30];
                int pages;
                int price;
            };
        }

    b. ) typedef keyword :
        typedef keyword is used to declare an user defined datatype
        Ex:
        {
            struct book
            {
                char name[30];
                int pages;
                int price;
            };
            typedef struct book B;
            int main(void)
            {
                B set1[100];
                B set2[20];
            }
        }  
        ->> New user defined data type is B which contain the struture 
        of the book .

    c. ) sizeof operator :
        This is an built in function which returns the size of the data 
        type or size of a variable .
        EX: 
        {
            struct book
            {
                char name[30];
                int pages;
                int price;
            };
            typedef struct book B;
            int main(void)
            {
                B set1[100];
                B set2[20];
                printf("%d" bytes,sizeof(B)) // 38 bytes.
            }
        }
*/