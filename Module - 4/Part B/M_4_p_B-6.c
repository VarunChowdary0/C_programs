/*
Compare and explain the
following with suitable
examples
a. NestedStructures
b. Arrayofstructures
*/

/*
    a.) Nested Structures :
        Nested structures refer to the concept of having a 
        structure as a member of another structure. This 
        allows you to create more complex data structures 
        by combining multiple types of data within a single 
        structure.

        EX: 
        {
            typedef struct {
                int day;
                int month;
                int year;
            } Date;

            typedef struct {
                char name[50];
                int age;
                Date birthdate;
            } Person;

            int main() {
                Person person1 = {"John Doe", 30, {15, 8, 1993}};
                printf("Name: %s\n", person1.name);
                printf("Age: %d\n", person1.age);
                printf("Birthdate: %d-%d-%d\n", person1.birthdate.year,
                 person1.birthdate.month, person1.birthdate.day);
                return 0;
            }
        }
    b.) Array of Structures :
        An array of structures is a collection of multiple structure
         instances stored in contiguous memory locations. This is 
         useful when you want to manage and manipulate multiple 
         related data entries of the same structure type.
         EX:
         {
            typedef struct {
                char name[50];
                int age;
            } Person;

            int main() {
                Person people[3] = {
                    {"Alice", 25},
                    {"Bob", 30},
                    {"Carol", 22}
                };

                for (int i = 0; i < 3; i++) {
                    printf("Person %d:\n", i + 1);
                    printf("Name: %s\n", people[i].name);
                    printf("Age: %d\n", people[i].age);
                    printf("\n");
                }

                return 0;
            }

         }
*/