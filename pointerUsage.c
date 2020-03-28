#include<stdio.h>

int main(){
    int n = 4;
    float x = 2.3f;
    //declare an integer pointer variable
    int *m;
    //declare a float pointer variable
    float *y;
    //store the address of n in m
    m = &n;
    //store the address of x in y
    y = &x;
    printf("Address of n is %p\n", m);
    //display n through m
    printf("n is %d\n", *m);
    printf("Address of x is %p\n", y);
    //display x through y
    printf("Value of x is %f\n", *y);
    return 0;
}
