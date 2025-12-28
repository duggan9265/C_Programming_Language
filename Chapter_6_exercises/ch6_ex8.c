#include <stdio.h>

int main(void){

    int days, start, i;

    printf("Enter number of days in the month: ");
    scanf("%d", &days);
    printf("Enter starting day of the week: ");
    scanf("%d", &start);

    for(i=1;i<start;i++)
        printf("    ");

    for(int j=1,i=start;i<=days,j<=days;i++,j++)
        
        if(i%7==0)
            printf("%3d\n",j); 
        else
            printf("%3d ",j);

    return 0;
}