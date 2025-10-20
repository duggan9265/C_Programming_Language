#include <stdio.h>

int main(void){
    
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p;
    int row_sums_1, row_sums_2, row_sums_3, row_sums_4;
    int col_sums_1, col_sums_2, col_sums_3, col_sums_4;
    int diag_1, diag_2;

    printf("Enter the numbers between 1 and 16:"); 
        
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
                &a,&b,&c,&d,
                &e,&f,&g,&h,
                &i,&j,&k,&l,
                &m,&n,&o,&p);

    printf("%2d %2d %2d %2d\n",a,b,c,d);
    printf("%2d %2d %2d %2d\n",e,f,g,h);
    printf("%2d %2d %2d %2d\n",i,j,k,l);
    printf("%2d %2d %2d %2d\n",m,n,o,p);


    row_sums_1 = a+b+c+d;
    row_sums_2 = e+f+g+h;
    row_sums_3 = i+j+k+l;
    row_sums_4 = m+n+o+p;
    col_sums_1 = a+e+i+m;
    col_sums_2 = b+f+j+n;
    col_sums_3 = c+g+k+o;
    col_sums_4 = d+h+l+p;
    diag_1 = a+f+k+p;
    diag_2 = d+g+j+m;

    printf("Row Sums: %d %d %d %d\n", row_sums_1, row_sums_2, row_sums_3, row_sums_4);
    printf("Col Sums: %d %d %d %d\n", col_sums_1, col_sums_2, col_sums_3, col_sums_4);
    printf("Diagonal Sums: %d %d\n", diag_1, diag_2);
    
    return(0);
}