#include <stdio.h>

int main(void){
    
    float n;
    int i,j;

    printf("Enter a number n :");
    scanf("%f", &n);

    for (i = 2; i <= n; i += 2) {
    j = i * i;
    if (j<=n) 
        printf("%d ", j);
    else break;
}
    return 0;
}