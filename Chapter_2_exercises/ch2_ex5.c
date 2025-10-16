#include <stdio.h>


int main(void){
    float x, poly;

    printf("Insert a value for x:");
    scanf("%f", &x); // % introduces a conversion specification — it tells scanf() what type of data to read.
                    // The & gives the memory address of a variable.

    poly = ( 3*(x*x*x*x*x) + 2*(x*x*x*x) - 5*(x*x*x) - (x*x) + 7*x - 6 );

    printf("The value of the polynomial is: %.4f", poly);

    return(0);
}