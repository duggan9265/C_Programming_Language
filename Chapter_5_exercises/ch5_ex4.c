#include <stdio.h>

int main(void){

    int speed;

    printf("Enter a speed in knots:");
    scanf("%d", &speed);

    if (speed < 1)
        printf("Calm\n");
    if (speed >= 1 && speed <= 3)
        printf("Light Breeze\n");
    
    if (speed >= 4 && speed <= 27)
        printf("Breeze\n");
    if (speed >= 28 && speed <= 47)
        printf("Gale\n");

    if (speed >= 48 && speed <= 63)
        printf("Storm\n");
    if (speed > 63)
        printf("Hurricane\n");

    return(0);
}