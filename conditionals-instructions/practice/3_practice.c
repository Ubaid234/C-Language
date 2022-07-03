#include <stdio.h>

int main () {

    char ch ;
    printf("Enter a character \n");
    scanf("%c" , &ch);
    
    // CASE 1 
    // if ( islower(ch)) {
    //     printf("%c is a lower case character \n" , ch);
    // } else {
    //     printf("%c is a upper case character \n" , ch);
    // }

    // CASE 2
    if ( isupper(ch)) {
        printf(" The character %c is a upper case character \n" , ch);
    } else {
        printf(" The character %c is a lower case character \n" , ch);
    }
    
    return 0;
}