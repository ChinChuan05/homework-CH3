#include <stdlib.h>
#include <stdio.h>

int power(int base, int exponent);

int main(){
    int a, b;
    printf("power(a, b) Enter the a & b: ");
    scanf("%d%d", &a, &b);
    printf("\npower(%d, %d) = %d\n", a, b, power(a, b));
}

int power(base, exponent){
    if (exponent != 1)
        return power(base, exponent-1) * base;
    else
        return base;
}