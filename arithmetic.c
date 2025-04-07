#include <stdio.h>
int main()
{
    float a = 5;
    int b = 2;
    int c = 7;

    int sum = a + b;
    printf("Sum = %d\n", sum);

    int sub = a - b;
    printf("Sub = %d\n", sub);

    int mul = a * b;
    printf("Mul = %d\n", mul);

    float div = a / b;
    printf("Div = %f\n", div);

    int mod = c % b;
    printf("Mod = %d\n", mod);

    return 0;
}