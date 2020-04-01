#include<stdio.h>

void fun(int *n){
    //access value at n => access value at address of number
    (*n)++;
    printf("The data is %d\n", *n);
}

int main(){
    int number = 5;
    //Declare a pointer var to store the address of number
    int *p;
    //store the address of number in p
    p = &number;
    //call fun with input as number
    //call by reference
    fun(p);
    //display number
    printf("The data is %d\n", number);
    return 0;
}
