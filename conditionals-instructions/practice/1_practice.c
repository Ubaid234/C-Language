#include<stdio.h>

int main() {
    
    int english , Maths , Science ;
    int total;
    printf("Enter your marks in English  \n");
    scanf("%d" , &english);
    printf("Enter your marks in Maths \n");
    scanf("%d" , &Maths);
    printf("Enter your marks in Science \n");
    scanf("%d" , &Science );
    total = (english + Maths + Science) / 3;

    if ((total < 40) || english < 33 || Maths < 33 || Science < 33){
        printf (" You failed");
    }
    else{
        printf("CONGO , YOU HAVE PASSED");
    }
    
    return 0;
}