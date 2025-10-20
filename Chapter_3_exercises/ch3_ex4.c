#include <stdio.h>

int main(){
    int co_code, area_code, number;

    printf("Enter phone number:");
    scanf("(%d) %d-%d",&co_code, &area_code, &number);

    printf("You entered:%d.%d.%d",co_code, area_code, number);
    
    return(0);
}