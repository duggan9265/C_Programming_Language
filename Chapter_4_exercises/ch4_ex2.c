#include <stdio.h>

int main(void){

    int d, d1,d2,d3,d4;

    printf("Enter a 3 digit number:");
    scanf("%d", &d);

    d1 = d/100; //235/100 = 2.35 =2
    
    d2 = d%100;  // Gives r --> 235/100 = 2 r35  = 35  
    d3=  d2/10; // 35/10 = 3.5 = 3
    
    d4 = d2%10; // Gives r --> 35/10 = 3 r5 = 5

    printf("The reversal is:%d%d%d\n",d4,d3,d1);
    
    return(0);
}