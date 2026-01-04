#include <stdio.h>

int main(void)
{
    double e = 1.0;
    double factorial = 1.0;
    double term = 1.0;
    double epsilon;
    int i = 1;

    printf("Enter epsilon: ");
    scanf("%lf", &epsilon);

    while (term >= epsilon) {
        factorial *= i;          // i!
        term = 1.0 / factorial;  // current term
        e += term;
        i++;
    }

    printf("Approximation of e: %.10f\n", e);
    return 0;
}
