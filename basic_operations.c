# include <stdio.h>

double sum(double n1, double n2) {
    return n1 + n2;
}

double sub(double n1, double n2) {
    return n1 - n2;
}

double division(double n1, double n2) {
    return n1 / n2;
}

double mul(double n1, double n2) {
    return n1 * n2;
}

int main () {
    double n1;
    double n2;
    printf("Number 1: ");
    scanf("%lf", &n1);
    printf("Number 2: ");
    scanf("%lf", &n2);
    printf("Sum = %.2lf\n", sum(n1, n2));
    printf("Subt = %.2lf\n", sub(n1, n2));
    printf("Div = %.2lf\n", division(n1, n2));
    printf("Mult = %.2lf\n", mul(n1, n2));
}