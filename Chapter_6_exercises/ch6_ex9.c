#include <stdio.h>

int main(void){

    float loan, rate, repay;
    float rate_per_month;
    float bal_1, bal_2;
    int no_of_payments;

    printf("Enter loan amount: ");
    scanf("%f", &loan);

    printf("Enter interest rate (annual %%): ");
    scanf("%f", &rate);
    
    printf("Enter monthly repayment: ");
    scanf("%f", &repay);

    rate_per_month = (rate / 100.00f) / 12.00f;

    printf("Enter the number of payments made: ");
    scanf("%d", &no_of_payments);
    bal_1 = loan;

    for(int i=1; i<=no_of_payments; i++){
          
        bal_1 = (bal_1 + (bal_1 * rate_per_month) ) - repay;
        printf("Balance after payment %d is %.2f\n", i, bal_1); 
    }    
    return 0;
}