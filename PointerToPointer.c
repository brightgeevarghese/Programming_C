#include<stdio.h>

int main(){
    int n = 4;
    int *m;
    //pointer to pointer
    int **y;
    //store address of n in m
    m = &n;
    y = &m;
    //display n thru m
    printf("%d\n", *m);
    //display n thru y
    printf("%d\n", **y);
    return 0;
}
