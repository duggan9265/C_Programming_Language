// Question says are taxed 2% on amount over 750, 3% on amount over 2250 i.e. if
//  you earn 750 or 2250 exactly you do not pay the additional percentage by my reading.

#include <stdio.h>

int main(void){

    float income, total;

    printf("Enter the amount of taxable income:$");
    scanf("%f", &income);

    if (income < 750.00f){
        total = income*0.01f; 
    }

    else if (income >= 750.00f && income < 2250.00f){
        total = 7.50f + ( (income-750.00f) * 0.02f);
    }

    else if (income >= 2250.00f && income < 3750.00f){
        total = 37.50f + ( (income-2250.00f) * 0.03f); 
    }

    else if (income >= 3750.00f && income < 5250.00f){
        total = 82.50f + ( (income-3750.00f) * 0.04f); 
    }

    else if (income >= 5250.00f && income < 7000.00f){
        total = 142.50f + ( (income-5250.00f) * 0.05f); 
    }

    else {
        total = 230.50f + ( (income-7000.00f) * 0.06f); 
    }

    printf("The tax due is $%.2f\n", total);

    return(0);
}