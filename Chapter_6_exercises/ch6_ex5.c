#include <stdio.h>

int main(void){

    int d,d1;
    
    printf("Enter a number:");
    scanf("%d", &d);
    printf("The number reversed is: ");

    do{

    d1 = d%10; // ones digit. % gives you the remainder after dividing by 10.
                // 28%10 = 20 r 8 i.e ¨returns¨ 8
    d = d/10; //tens digit. divide one integer by another, 
               //result is also an integer, the fractional part is always
              //rounded down
    printf("%d",d1);
    }
    while(d>0);

    return(0);
}