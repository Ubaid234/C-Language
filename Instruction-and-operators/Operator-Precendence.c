#include<stdio.h>

int main (){

    // Operator Precedence 

    int a = 4;
    int b = 3;

    printf("The value of 3*a - 8*b is %d \n " , 3*a - 8*b);

    // Operator Associativity in case of equal operator precendence

    printf("The value of 8*b / 3*a is %d \n ", 8*b / 3*a);
    // 8*3/3*a = 24 
    // 24/3*4
    // 8 * 4
    // 32

    return 0;
}