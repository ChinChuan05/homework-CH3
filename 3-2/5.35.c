#include <stdlib.h>
#include <stdio.h>

unsigned int Fibonacci(int n);

int main(){
    int n;
    printf("Fibonacci(n) Enter the n: ");
    scanf("%d", &n);
    printf("\nFibonacci(%d) = %d\n", n, Fibonacci(n));
}

unsigned int Fibonacci(n){
    unsigned result;

    if(n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else
        return Fibonacci(n-1) + Fibonacci(n-2);

}
