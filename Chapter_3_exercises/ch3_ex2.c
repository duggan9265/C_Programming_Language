#include <stdio.h>

int main(void){
    
    int item_no, day, month, year;
    float unit_price;

    printf("Enter the item number:");
    scanf("%d", &item_no);

    printf("Enter the unit price:");
    scanf("%f", &unit_price);

    printf("Enter the purchase date:");
    scanf("%2d/%2d/%4d", &day, &month, &year);

    printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n%-8d\t$%7.2f\t%02d/%02d/%04d", item_no, unit_price, day, month, year);    
    
    return(0);
}