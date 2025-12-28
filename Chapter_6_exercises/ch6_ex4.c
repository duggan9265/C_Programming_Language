#include <stdio.h>

int main(void){

    float trade, comm;

    do{
        printf("Enter value of trade: ");
        scanf("%f", &trade);

        if(0==trade)
            break;
        else if (trade < 2500.00f)
            comm = 30.00f +.017f * trade;
        else if (trade < 6250.00f)
            comm = 56.00f + .0066f * trade;
        else if (trade < 20000.00f)
            comm = 76.00f + .0034f * trade;
        else if (trade < 50000.00f)
            comm = 100.00f + .0022f * trade;
        else if (trade < 500000.00f)
            comm = 155.00f + .0011f * trade;
        else
            comm = 255.00f +.0009f * trade;
        
        if (comm < 39.00f && trade!= 0)
            comm = 39.00f;

        printf("Commission: $%.2f\n", comm);
    }
    while(trade>0);

    return(0);
}