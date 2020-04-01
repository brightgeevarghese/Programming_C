#include<stdio.h>

/***
 * usage of free
 */
int main(){
    //Declare a pointer to store the address, which is returned by malloc
    int *p;
    //Request system to give 4 bytes
    p = (int*)malloc(4);
    //check the status of malloc
    if (p == NULL){
        printf("Something wrong");
    }
    else{
        *p = 10;
    }
    //free the allocated memory -  pass starting byte's address as i/p to free()
    free(p);
    //to prevent memory leakage
    p = NULL;
    //check - we can read data from deallocated memory
//    printf("%d", *p);//=> memory leakage if p is not assigned with NULL (line# 21)
    return 0;
}

