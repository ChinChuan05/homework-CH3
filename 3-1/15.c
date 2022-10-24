#include <stdlib.h>
#include <stdio.h>

int maximum(int x, int y, int z);

int main(void){
    int num1, num2, num3;

    printf("Enter Tree intergers: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    printf("Maximum is: %d\n", maximum(num1, num2, num3));
}

int maximum(int x, int y, int z){
    int max = x;
    
    if(y > max)
        max = y;
    if (z > max)
        max = z;
        
    return max;
}
