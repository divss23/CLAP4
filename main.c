#include <stdio.h>
int main(void) 
{
    struct student {
    char registerno[15];
    char firstname[64];
    char lastname[64];
    float marks;
};
struct student std[3];
struct student *ptr = NULL;
int i;
ptr = std;
for (i = 0; i < 3; i++) 
{
    printf("Student Number%d\n", (i + 1));
    printf("Enter Registration Number: ");
    scanf("%s", ptr->registerno);
    printf("Enter first name: ");
    scanf("%s", ptr->firstname);
    printf("Enter last name: ");
    scanf("%s", ptr->lastname);
    printf("Enter Marks: ");
    scanf("%f", &ptr->marks);
    ptr++;
}
ptr = std;
for (i = 0; i < 3; i++) 
{
    printf("\nStudent Number%d\n", (i + 1));
    // display result via std variable
    printf("\nResult via std\n");
    printf("Registration Number: %s\n", std[i].registerno);
    printf("First Name: %s\n", std[i].firstname);
    printf("Last Name: %s\n", std[i].lastname);
    printf("Marks: %f\n", std[i].marks);
    // display result via ptr variable
    printf("\nResult via ptr\n");
    printf("Registration Number: %s\n", ptr->registerno);
    printf("First Name: %s\n", ptr->firstname);
    printf("Last Name: %s\n", ptr->lastname);
    printf("Marks: %f\n", ptr->marks);
    ptr++;
}
  
  return 0;
}
