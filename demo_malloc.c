#include<stdio.h>

/***
 * usage of malloc
 */
int main(){
    //Declare a pointer variable to store the address
    int *p;
    //call malloc to allocate4 bytes of memory
    p = (int*)malloc(4);
    //check memory operation is success or not
    if (p == NULL){
        printf("Failure");
    }
    else{
        //memory allocation is success
        //write or store an integer in allocated memory
        *p = 10;
        //accessing from allocated memory
        printf("%d\n", *p);
    }
    return 0;
}
