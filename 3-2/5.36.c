#include <stdlib.h>
#include <stdio.h>

void hanoi(int n, char source, char dest, char spare);

int main(void){
    int n;
    printf("Enter the n of hanoi tower: ");
    scanf("%d", &n);
    hanoi(n, 'A', 'B', 'C');
}

void hanoi(int n, char source, char dest, char spare){
    if (n == 1){
        printf("%c->%c\n", source, spare);
    }
    else{
        hanoi(n-1, source, spare, dest);
        hanoi(1, source, dest, spare);
        hanoi(n-1, dest, source, spare);
    }
}
