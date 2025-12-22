#include <stdio.h>

int main(void){

    long long n,m,r;

    printf("Enter 2 integers: ");
    scanf("%lld%lld",&n, &m);

    if(n<0){
        n=n*(-1);
    }
    if(m<0){
        m=m*(-1);
    }    

    if(n>m){
        long long temp = n;
        n=m; // want m to be the larger value. So n takes value of m (smaller value).
        m=temp; // m takes value of original n value (stored in temp).
    }

    do{
        r=m%n; // gives remainder
        m=n;  // copy n into m
        n=r; // copy remainder into n
    }
    while(n>0); // repeat until n=0

    printf("The Greatest Common Denominator (GCD) is %lld", m);

    return 0;
}