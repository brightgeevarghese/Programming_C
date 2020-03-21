#include <stdio.h>
#include <string.h>

struct Student{
    //members
    char name[20];
    int regNo;
    char gender;
}; 

int main() { 
    //Declare a structure variable
    struct Student s1;
    //Initialize the members of s1
    strcpy(s1.name, "Bright");
    s1.regNo = 123;
    s1.gender = 'm';
    //Declare an another structure variable
    struct Student s2;
    //Initialize members of s2
    s2.regNo = 234;
    strcpy(s2.name, "Andrew");
    s2.gender = 'm';
    //Display members of s1
    printf("Name is %s\n", s1.name);
    printf("Reg no is %d\n", s1.regNo);
    printf("Gender is %c\n", s1.gender);
    //Display members of s2
    printf("Name is %s\n", s2.name);
    printf("Reg no is %d\n", s2.regNo);
    printf("Gender is %c\n", s2.gender);
    return 0; 
} 