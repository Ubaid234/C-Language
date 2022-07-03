#include<stdio.h>

int main() {
    

    int num1 , num2 , num3 , num4 ;
    printf("ENTER NUMBER 1 \n");
    scanf("%d" , &num1);
    printf("ENTER NUMBER 2 \n");
    scanf("%d" , &num2);
    printf("ENTER NUMBER 3 \n");
    scanf("%d" , &num3);
    printf("ENTER NUMBER 4 \n");
    scanf("%d" , &num4);

    if (num1 > num2 && num1 > num3 && num1 > num4){
        printf("%d is the largest number \n" , num1);
    }
    else if (num2 > num1 && num2 > num3 && num2 > num4){
        printf("%d is the largest number \n" , num2);
    }
    else if (num3 > num1 && num3 > num2 && num3 > num4){
        printf("%d is the largest number \n" , num3);
    }
    else if (num4 > num1 && num4 > num2 && num4 > num3){
        printf("%d is the largest number \n" , num4);
    }
    else{
        printf("All numbers are equal \n");
    }

    return 0;
}