#include <stdio.h>

int main(void){

    int num;

    while(1){
        printf("Enter a two-digit number:");
        scanf("%d",&num);

        if(num <10 || num <0 || num>99){
            printf("Please enter a positive 2 digit number:");            
        }
        else{
            break;
        }

    };

    int x = num/10;
    int y = num%10;

   
    switch(x) {
        case 1:
            if(y==0)
                printf("diez");
            else if(y==1)
                printf("onze");
            else if(y==2)
                printf("doce");
            else if(y==3)
                printf("trece");
            else if(y==4)
                printf("catorce");
            else if(y==5)
                printf("quince");
            else if(y==6)
                printf("dieciseis");
            else if(y==7)
                printf("diecisiete");
            else if(y==8)
                printf("dieciocho");
            else if(y==9)
                printf("diecinueve");
            break;
        case 2:
            printf("veint");
            break;
        case 3:
            printf("treinta");
            break;
        case 4:
            printf("cuarenta");
            break;
        case 5:
            printf("cincuenta");
            break;
        case 6:
            printf("sesenta");
            break;
        case 7:
            printf("setenta");
            break;
        case 8:
            printf("ochenta");
            break;
        case 9:
            printf("noventa");
            break;    
    };

    switch(y){

        case 0:
            if(x==2)
            printf("e");
            break;
        case 1:
            if(x==1)
            break;
            if(x==2)
            printf("iuno");
            else
            printf(" y uno");
            break;
        case 2:
            if(x==1)
            break;
            if(x==2)
            printf("idos");
            else
            printf(" y dos");
            break;
        case 3:
            if(x==1)
            break;
            if(x==2)
            printf("itres");
            else
            printf(" y tres");
            break;
        case 4:
            if(x==1)
            break;
            if(x==2)
            printf("icuatro");
            else
            printf(" y cuatro");
            break;
        case 5:
            if(x==1)
            break;
            if(x==2)
            printf("icinco");
            else
            printf(" y cinco");
            break;
        case 6:
            if(x==1)
            break;
            if(x==2)
            printf("iseis");
            else
            printf(" y seis");
            break;
        case 7:
            if(x==1)
            break;
            if(x==2)
            printf("isiete");
            else
            printf(" y siete");
            break;
        case 8:
            if(x==1)
            break;
            if(x==2)
            printf("iocho");
            else
            printf(" y ocho");
            break;
        case 9:
            if(x==1)
            break;
            if(x==2)
            printf("inueve");
            else
            printf(" y nueve");
            break;
    };
    return 0;
}