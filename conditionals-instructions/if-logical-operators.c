// Logical Operators

#include<stdio.h>

int main() {
    
    int age;
    int vipPass = 0;
    // vipPass  = 1;
    printf("Enter the age \n ");
    scanf("%d" , &age);

    if ( age <= 70 && age >= 18  || !(vipPass == 1) ) {
        printf("You are above 18 and below 70 , thus you can drive \n");
    }
    else{
        printf("You can't drive \n");
    }

    if ( age == 50 ) {
        printf("Half Century \n");
    }

    return 0;
}