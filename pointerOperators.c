#include<stdio.h>

int main(){
    int n = 4;
    //display the address of n
    printf("%p\n", &n);
    //display n through indirection operator
    printf("%d\n", *&n);
    printf("%d\n", n);
    return 0;
}
