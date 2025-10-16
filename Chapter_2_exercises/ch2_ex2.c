#include <stdio.h> 

#define PI 3.14f

int main(void){
    float frac = 4.0f/3.0f; // written as 4/3 gives result 3140.000 which is wrong
    int r = 10;
    float v;

    v= (frac*PI*r*r*r);

    printf("The volume v is: %.4f\n", v);

    return(0);

}