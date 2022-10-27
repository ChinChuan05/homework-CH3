#include <stdlib.h>
#include <stdio.h>

int lcm(int num1, int num2);
int gcd(int num1, int num2);

int main(){
    int a, b;
    printf("LCM(a, b) Enter the a & b: ");
    scanf("%d%d", &a, &b);
    printf("\nLCM(%d, %d) = %d\n", a, b, lcm(a, b));
}

int gcd(num1, num2){
    int num;
    if(num1 < num2){
        num = num1;
        num1 = num2;
        num2 = num;
    }

    if(num1 % num2 != 0){
        return gcd(num2, num1%num2);
    }
    else{
        return num2;
    }
}

int lcm(num1, num2){
    return (num1 * num2) / gcd(num1, num2);
}
