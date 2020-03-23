#include <stdio.h>

struct Employee{
    char name[25];
    int empId;
    char dep[20];
}e3 = {"Tom", 345, "EEE"};
int main() { 
    //structure variable for Employee - e1
    struct Employee e1 = {"Bright", 123, "CSE"};
    //another structure variable - e2
    struct Employee e2 = {"Andrew", 456, "ECE"};
    //Display the details of e1
    printf("Name is %s\n", e1.name);
    printf("Id is %d\n", e1.empId);
    printf("Dep is %s\n", e1.dep);
    //Display the details of e2
    printf("Name is %s\n", e2.name);
    printf("Id is %d\n", e2.empId);
    printf("Dep is %s\n", e2.dep);
    //Display the details of e3
    printf("Name is %s\n", e3.name);
    printf("Id is %d\n", e3.empId);
    printf("Dep is %s\n", e3.dep);
    return 0; 
} 
