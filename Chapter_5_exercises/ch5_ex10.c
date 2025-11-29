#include <stdio.h>

int main(void){

    int num_grade;

    printf("Enter the grade value: ");
    scanf("%d",&num_grade);

    num_grade = num_grade/10; //so now we test the tens digit

    switch(num_grade){

        case 10: //100%
        case 9:  //90-99%
            printf("A");
            break;
        case 8:
            printf("B");
            break;
        case 7:
            printf("C");
            break;
        case 6:
            printf("D");
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            printf("F");
            break;
    };

    return(0);
}