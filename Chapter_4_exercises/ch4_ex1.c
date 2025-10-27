#include <stdio.h>

int main(void){

    int d,d1,d2;

    printf("Enter a two digit number:");
    scanf("%d", &d);

    d1 = d/10; //tens digit. divide one integer by another, 
               //result is also an integer, the fractional part is always
              //rounded down
    d2 = d%10; // ones digit. % gives you the remainder after dividing by 10.
                // 28%10 = 20 r 8 i.e ¨returns¨ 8

    printf("The reversal is:%d%d\n",d2,d1);

    return(0);
}