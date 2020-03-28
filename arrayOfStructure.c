#include <stdio.h>

struct Mobile{
    int RAM;
    char brand[20];
    int cost;
}n[2]; 

int main() { 
    //create an array of two structure variables
    //struct Mobile n[2];
    //initialize 1st structure variable, n[0]
    printf("Enter RAM, brand and cost");
    scanf("%d%s%d", &n[0].RAM, n[0].brand, &n[0].cost);
    //initialize 2nd structure variable, n[1]
    printf("Enter RAM, brand and cost");
    scanf("%d%s%d", &n[1].RAM, n[1].brand, &n[1].cost);
    //display values of members belong to 1st - n[0]
    printf("RAM is %d\n", n[0].RAM);
    printf("Brand is %s\n", n[0].brand);
    printf("Cost is %d\n", n[0].cost);
    //display values of members belong to 2nd - n[1]
    printf("RAM is %d\n", n[1].RAM);
    printf("Brand is %s\n", n[1].brand);
    printf("Cost is %d\n", n[1].cost);
    return 0; 
} 
