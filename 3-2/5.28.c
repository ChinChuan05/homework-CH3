#include <stdlib.h>
#include <stdio.h>


int main(){
    char alphabet;

    printf("Enter a alphabet: ");
    scanf("%c", &alphabet);

    if((int)alphabet >= 97)
        alphabet -= 32;
    else
        alphabet += 32;
    printf("%c\n", alphabet);
}
