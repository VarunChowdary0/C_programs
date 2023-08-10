/*
Consider the declaration of
the structure
typedef struct
{
    char x;
    char *y;
    int z[20];
}status;
    a.) struct status s1;
    b.) struct status s2;
    c.) status s3;
    d.) status s4[20];
*/

/*

    a.) struct status s1;
      This declaration is valid. It declares a variable s1 
      of type struct status.

    b.) struct status s2;
     This declaration is valid as well. It declares a 
     variable s2 of type struct status.

    c.) status s3;
      This declaration is valid due to the typedef statement. 
      It declares a variable s3 of type status, which is a 
      typedef for struct status.

    d.) status s4[20];
      This declaration is valid. It declares an array s4 of 
      20 elements, where each element is of type status, which 
     is a typedef for struct status.
*/