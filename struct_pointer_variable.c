#include<stdio.h>

struct Student{
    int regNo;
    float height;
};

int main(){
    //create a structure variable
    struct Student s1 = {101, 5.8f};
    //Declare a pointer variable which can store address of s1
    struct Student *p;
    //store the address of s1 in p
    p = &s1;
    //Access s1's data through p
    printf("Reg. No. is %d\n", p->regNo);
    printf("Height is %.2f\n", p->height);
    printf("Reg. No. is %d\n", (*p).regNo);
    printf("Height is %.1f\n", (*p).height);
    return 0;
}

