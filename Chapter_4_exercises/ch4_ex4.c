#include <stdio.h>

int main(void){
    
    int n, d_0, d_1, d_2, d_3, d_4, d_5, d_6, d_7;

    printf("Enter a number between 0 and 32767:");
    scanf("%5d",&n);

    //Here, we keep dividing the input by 8 and taking the modulus 
    // each time. This gives each of the remainders which are our 
    // binary numbers

    d_0 = n%8; // this will give the remainder i.e. 32767%8 = 7 (LSB)
    d_1 = (n/8)%8; //divide by 8: 32767/8 = 4095 --> 4095%8 gives r=7
    d_2 = (n/8/8)%8; // 
    d_3 = (n/8/8/8)%8;
    d_4 = (n/8/8/8/8)%8;
    d_5 = (n/8/8/8/8/8)%8; //(MSB)
    
    

    printf("The number in octal is:%01d%01d%01d%01d%01d",d_5,d_4,d_4,d_2,d_1,d_0);
    
    return(0);
}