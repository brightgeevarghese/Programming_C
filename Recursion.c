#include<stdio.h>

void fun(int i){
    if(i < 3){
        printf("Fun %d\n", i);
        i++;
        fun(i);
        printf("Over %d\n", i);
    }
}

int main(){
    fun(1);
    return 0;
}
