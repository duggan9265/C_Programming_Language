#include <stdio.h>

int main(void){
    int dollars, dol_20, dol_10, dol_5, dol_1;

    printf("Enter amount in dollars:" );
    scanf("%d", &dollars);

    dol_20 = dollars/20; // 93/4 = 4.65 = 4
    dollars = dollars - (20*dol_20); // 93-20*4 = 13
    
    dol_10 = dollars/10; // 13/10 = 1.3 = 1
    dollars = dollars-(10*dol_10); // 13-(10*1) = 3

    dol_5 =dollars/5; // 3/5 = 0
    dollars = dollars-(5*dol_5); // 3-(5*0) = 3


    dol_1 = dollars/1;
    dollars= dollars-(1*dol_1); // 3-(1*1) = 3

    printf("The smallest denominations is:\n");
    printf("$20: %d \n",dol_20);
    printf("$10: %d \n",dol_10);
    printf("$5: %d \n",dol_5);
    printf("$1: %d \n",dol_1);

    return(0);
}