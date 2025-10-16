#include <stdio.h>

int main(void) {
    float loan, rate, repay;
    float rate_per_month;
    float bal_1, bal_2, bal_3;

    printf("Enter loan amount: ");
    scanf("%f", &loan);

    printf("Enter interest rate (annual %%): ");
    scanf("%f", &rate);
    
    printf("Enter monthly repayment: ");
    scanf("%f", &repay);

    rate_per_month = (rate / 100) / 12;

    // 1st month
    bal_1 = (loan + (loan * rate_per_month) ) - repay;
    // 2nd month
    bal_2 = (bal_1 + (bal_1 * rate_per_month) ) - repay;
    // 3rd month
    bal_3 = (bal_2 + (bal_2 * rate_per_month) ) - repay;

    printf("Balance after first repayment: $%.2f\n", bal_1);
    printf("Balance after second repayment: $%.2f\n", bal_2);
    printf("Balance after third repayment: $%.2f\n", bal_3);

    return 0;
}
