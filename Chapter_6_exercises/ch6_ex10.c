#include <stdio.h>

int main(void)
{
    int d, m, y;
    int earliest_d, earliest_m, earliest_y;

    printf("Enter a date (dd/mm/yy): ");
    scanf("%d/%d/%d", &earliest_d, &earliest_m, &earliest_y);

    while (1) {
        printf("Enter another date (dd/mm/yy): ");
        scanf("%d/%d/%d", &d, &m, &y);

        if (d == 0 && m == 0 && y == 0)
            break;

        if (y < earliest_y ||
           (y == earliest_y && m < earliest_m) ||
           (y == earliest_y && m == earliest_m && d < earliest_d)) {

            earliest_d = d;
            earliest_m = m;
            earliest_y = y;
        }
    }

    printf("The earliest date is %d/%d/%d\n",
           earliest_d, earliest_m, earliest_y);

    return 0;
}
