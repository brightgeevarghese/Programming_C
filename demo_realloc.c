#include<stdio.h>

/***
 * usage of realloc
 */
int main(){
    //Declare a pointer variable to store the address of allocated memory
    int *p;
    //use malloc to allocate memory
    p = (int*)malloc(4);
    //Reallocate to 8 bytes
    p = realloc(p, 8);
    //check the status of realloc
    if(p == NULL){
        printf("Failure");
    }
    else{
        //store 1st data in allocated memory
        *p = 10;
        //store the 2nd data
        *(p + 1) = 20;
        //display both data
        printf("%d %d", *p, *(p + 1));
    }
    return 0;
}
