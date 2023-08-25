/*
Define slack byte and explain
how it affects the
implementation of structures
through sample code
*/

/*
A slack byte, also known as a padding byte or alignment byte,
 is a concept in computer memory management where extra bytes
  are added to a data structure to align its elements in 
  memory according to specific alignment rules. This 
  alignment is often required to improve memory access
  efficiency and performance. The padding ensures that 
  each element in the structure is located at an address 
  that is a multiple of its required alignment, which can 
  vary based on the data type and the architecture of the 
  system.
*/
/*EXAMPLE*/

#include <stdio.h>

// A structure without padding
struct WithoutPadding {
    char a;
    int b;
    char c;
};

// A structure with padding
struct WithPadding {
    char a;
    char pad[7]; // Adding slack bytes for alignment
    int b;
    char c;
};

int main() {
    printf("Size of WithoutPadding: %zu\n", sizeof(struct WithoutPadding));
    printf("Size of WithPadding: %zu\n", sizeof(struct WithPadding));

    return 0;
}
