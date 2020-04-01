#include<stdio.h>

/***
 * usage of calloc
 */
int main(){
    //Declare a pointer variable to store the address of allocated memory
    int *p;
    //request the system to allocate 2 blocks of memory - each block's size as 4 bytes
    p = (int*)calloc(2, 4);//calloc function returns void pointer type(void*)
    //check memory allocation status
    if (p == NULL){
        printf("Failure");
    }
    else{
        //write or store an integer in the allocated space
        *p = 10;// Integer takes 4 bytes
        //Write one more data in the next 4 bytes
        *(p + 1) = 20; 
        //display both integers
        printf("%d %d", *p, *(p + 1));
    }
    
    return 0;
}
