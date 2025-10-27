#include <stdio.h>

int main(void){
    int d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,d11, 
    first_sum, second_sum,final;

    printf("Enter the 11-digit number:");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d1,&d2,&d3,&d4,
    &d5,&d6,&d7,&d8,&d9,&d10,&d11);

    first_sum = d1+d3+d5+d7+d9+d11;
    second_sum = d2+d4+d6+d8+d10;

    first_sum =3*first_sum;
    second_sum += first_sum;

    second_sum = second_sum-1;
    second_sum = second_sum%10;
    final = 9-second_sum;

    printf("Check digit: %d\n", final);
    
    return(0);
}