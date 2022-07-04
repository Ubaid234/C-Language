#include <stdio.h>
int main () {

    int a;
    printf("Enter a number: ");
    scanf("%d" , &a);

    do {
        printf ("%d \n" , &a);
        a--;
    } 
    while (a < n);

    return 0;
}