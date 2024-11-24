#include <stdio.h>
#include <float.h>

int main() {
    printf("Storage size: %ld bytes\n"
    "Smallest positive value: %E\n"
    "Smallest positive value: %E\n"
    "Precision: %d decimal digits\n",
    sizeof(float), FLT_MIN, FLT_MAX, FLT_DIG);

    puts("\n An example of float precision:\n");
    double d_var = 12345.6;
    float f_var = (float) d_var;

    printf("The floating-point number"
    "%18.10f\n", d_var);
    printf("has benn stored in a variable\n"
    "of type float as the value     "
    "%18.10f\n", f_var);
    printf("The rounding error is       "
    "%18.10f\n", d_var - f_var);

    return 0; 
}