#include <stdio.h>

int main(void){

    int gs1, group_ident, pub, item_no, check_dig;

    printf("Enter ISBN:");
    scanf("%d-%d-%d-%d-%d", &gs1, &group_ident, &pub, &item_no, &check_dig);

    printf("GS1 Prefix: %d\nGroup Identifier: %d\nPublisher Code: %d\nItem No.: %d\nCheck Digit: %d\n",
       gs1, group_ident, pub, item_no, check_dig);

    return(0);
}