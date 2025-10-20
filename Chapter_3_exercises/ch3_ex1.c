#include <stdio.h>

int main(void){
    int day, month, year;

    printf("Enter a date (dd/mm/yyyy):");
    scanf("%2d/%2d/%4d", &day, &month, &year);

    printf("You entered the date:%04d%02d%02d", year,month,day); //need to padd month, day with 0 to 
                                                                 //ensure a leading 0 is output

    return(0);
}