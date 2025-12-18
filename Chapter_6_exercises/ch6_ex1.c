#include <stdio.h>

int main(void){
    
    float x,z;
    float y = 0;

    do{
        printf("Enter a number: ");
        scanf("%f", &x);
        
        if (x>y){
            y=x;
        }
    }
    while(x>0);

    if(y<1 && y>0) //&& logical AND ; & bitwise AND
        printf("The largest number entered is: %.10f",y);//just for practice
    else
        printf("The largest number entered is: %.2f",y); 

    return(0);
}