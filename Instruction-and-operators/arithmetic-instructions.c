#include<stdio.h>
#include<math.h>

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

    printf("5 when divided by 2 leaves a reminder of %d \n " , 5%2);
     
    // No operator is assumed to be present  
    // printf("The value of 4 * 5 is %d \n " ,(4)(5) ); // shows error

    // Operator is to be placed to perform the function

    printf(" The value of 4 and 5 %d \n " , 4 * 5);

    // Finding power since there is no operator to find in c;

    printf(" The value of 4 to the power 5 is %f \n", pow(4,5));

    // Type conversion 

    printf(" The Value of 6 + 4 is %d \n" , 6 + 4 );
    printf(" The Value of 6 + 4.34 is %f \n" , 6 + 4.34 );
    printf(" The Value of 6.3 + 4.3 is %d \n" , 6.3 + 4.3 );
    
    return 0;
}                       