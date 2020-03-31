#include<stdio.h>

int main(){
    int a[] = {10, 20, 30};
    int i;
    for(i = 0; i < 3; i++){
        printf("%d\n", *(a+i));
    }
    return 0;
}

