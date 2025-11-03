#include <stdio.h>

int main(void){

    float share, price_per_share, total, commission, commission_riv;

    printf("Enter the number of shares:");
    scanf("%f",&share);
    
    printf("Enter the price per share:");
    scanf("%f",&price_per_share);

    total = share * price_per_share;

    //Rival commission 
    if (share < 2000)
        commission_riv = 33.00f + (share * 0.03f);
    else
        commission_riv = 33.00f + (share * 0.02f);
    
    // Our company commission

    if (total < 2500.00f){
        commission = 30.00f + (0.017f * total);
    }

    else if (total < 6250.00f) {
        commission = 56.00f + (0.0066f * total);
    }

    else if (total < 20000.00f) {
        commission = 76.00f + (0.0034f * total);
    }

    else if (total < 50000.00f) {
        commission = 100.00f + (0.0022f * total);
    }

    else if (total < 500000.00f) {
        commission = 155.00f + (0.0011f * total);
    }

    else commission = 255.00f + (0.0009f * total);

    if (commission <39.00f) {
        commission = 39.00f;
    }

    printf("The commission is: $%.2f\n", commission);
    printf("The rival company commission is: $%.2f\n", commission_riv);

    return(0);
}