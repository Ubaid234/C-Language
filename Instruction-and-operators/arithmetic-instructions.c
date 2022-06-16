#include<stdio.h>

int main() {
    
    int a = 4 ;
    int b = 3 ;
    int z;
    z = a * b; // legal
    // b * a = z; // illegal 

    printf("The Value of a  + b is %d \n" , a + b);
    printf("The Value of a  - b is %d \n" , a - b);
    printf("The Value of a x b is %d \n" , z);
    printf("The Value of a / b is %d \n" , a / b);

    return 0;
}                       