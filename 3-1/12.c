#include <stdlib.h>
#include <stdio.h>

int square(int y);

int main(){
    for(int i=1;i<=10;i++){
        printf("%d  ", square(i));
    }
    printf("\n");
    return 0;
}

int square(y){
    return y*y;
}
