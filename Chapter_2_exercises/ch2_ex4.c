#include <stdio.h>

#define TAX 0.05f

int main(void){
    
    float dollar, add_tax, val_w_tax;

    printf("Enter an amount:");
    scanf("%f", &dollar); // Don¨t use .2f, .3f etc. inside a scanf call.

    add_tax = dollar * TAX;
    val_w_tax = dollar + add_tax;

    printf("With added tax: %.2f", val_w_tax);

    return(0);
}