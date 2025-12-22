#include <stdio.h>

int main(void){

    int n,m,r,num,denom;

    printf("Please enter a fraction. Use / to differenciate the numerator"
    " and denominator: ");
    scanf("%d/%d",&n,&m);
    
    num = n;
    denom = m; // keep m as the larger value

    if(n<0){
        n=n*(-1);
    }
    if(m<0){
        m=m*(-1);
    }

    if(n>m){ // we assume people use proper fractions however maybe not. Do this to calc GCD.
        int temp=n;
        n=m;
        m=temp;
    }

    do{
        r=m%n;
        m=n;
        n=r;
    }
    while(n>0);

    num = num/m;
    denom = denom/m;

    printf("The fraction in lowest terms is: %d/%d",num,denom);

    return 0;
}