#include <stdio.h>

int main(void) {

    int n;

    printf ("Enter a number:");
    scanf("%d",&n);

    if(n==0 || n<10) // n=0 assigns 0 to n!
        printf("The number %d has 1 digit\n",n);

    else if (n>=10 && n<100)
        printf("The number %d has 2 digits\n",n);

    else
        printf("The number %d has 3 digits\n",n);   

    return(0);
}