#include<stdio.h>

int main() {
    int i = 1 , sum =0 , n = 10;

    while ( i <=n ) {
        sum +=i;
        i++;
    }
    printf ( " The value of sum is ( 1 - 10 ) IS %d ", sum );
    return 0;
}