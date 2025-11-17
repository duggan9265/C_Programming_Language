#include <stdio.h>

int main(void){

    int hour, min, tot_min;

    printf("Enter departure time in 24 hour format i.e. XX:XX: ");
    scanf("%2d:%2d",&hour,&min);
    
    //Covert input time to minutes since midnight
    tot_min = (hour*60) + min; 
     

    //If statements to output time in 12 hour format
     if(tot_min >= 120 && tot_min <= 531)
        printf("Closet departure time is 8:00 a.m., arriving at 10:16 a.m.");
    
     else if(tot_min > 531 && tot_min <= 631)
        printf("Closet departure time is 9:43 a.m., arriving at 11:52 a.m.");
     
     else if(tot_min > 631 && tot_min <= 723)
        printf("Closet departure time is 11:19 p.m., arriving at 3:00 p.m.");
    
     else if(tot_min > 723 && tot_min <= 813)
        printf("Closet departure time is 12:47 p.m., arriving at 4:08 p.m.");
     
     else if(tot_min > 813 && tot_min <= 902)
        printf("Closet departure time is 2:00 p.m., arriving at 5:55 p.m.");
     
     else if(tot_min > 902 && tot_min <= 1052)
        printf("Closet departure time is 3:45 p.m., arriving at 9:20 p.m.");
    
     else if(tot_min > 1052 && tot_min <= 1232)
        printf("Closet departure time is 7:00 p.m., arriving at 11:58 p.m.");

     else //this should handle the case after 12 but before 2 when the 9:45pm flight is nearest
        printf("Closet departure time is 9:45 p.m., arriving at 11:58 p.m.");     

    return(0);
}