#include <stdio.h>

int main(void){

    int hour, minute;

    printf("Enter a 24 hour time:");
    scanf("%d:%d",&hour,&minute);

    if (hour < 12)
        printf("Equivalent to 12 hour time %02d:%02d am\n",hour,minute);

    else if (hour != 12 && hour > 12) { // needs the brackets as there are multiple statements!!!
        hour = hour - 12;
        printf("Equivalent to 12 hour time %02d:%02d pm\n",hour,minute);
    }
    
    else if(hour == 12)
        printf("Equivalent to 12 hour time %02d:%02d pm\n",hour,minute);

    
    return(0);
}