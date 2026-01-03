#include <stdio.h>

int main(void){

    int n;
    double e= 1.0;
    double factoral= 1.0;

    printf("Enter a value for n :");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        factoral *= i; // factoral = factoral*i 1*2 = 2 2
        e += 1/factoral;
       
    }
    printf("Approximation of e: %.10f\n", e);
    return 0;
}