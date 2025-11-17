#include <stdio.h>

int main(void){
    int mm, dd, yy, mm1, dd1, yy1;

    printf("Enter the first date (dd/mm/yy): ");
    scanf("%d/%d/%d",&dd,&mm,&yy);
    printf("Enter the second date (dd/mm/yy): ");
    scanf("%d/%d/%d",&dd1,&mm1,&yy1);

    if(yy > yy1){
        printf("%d/%d/%02d is earlier than %d/%d/%02d", dd1,mm1,yy1,dd,mm,yy);
    }
    else{
        printf("%d/%d/%02d is earlier then %d/%d/%02d", dd,mm,yy,dd1,mm1,yy1);
    }

    if(yy == yy1){
        if(mm > mm1){
        printf("%d/%d/02%d is earlier than %d/%d/%02d", dd1,mm1,yy1,dd,mm,yy);            
        }
        else{
        printf("%d/%d/02%d is earlier then %d/%d/%02d", dd,mm,yy,dd1,mm1,yy1);    
        };        
    };

    if(mm == mm1){
        if(dd > dd1){
        printf("%d/%d/02%d is earlier than %d/%d/%02d", dd1,mm1,yy1,dd,mm,yy);            
        }
        else{
        printf("%d/%d/%02d is earlier then %d/%d/%02d", dd,mm,yy,dd1,mm1,yy1);    
        };        
    };

    return(0);
}