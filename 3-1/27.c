#include <stdlib.h>
#include <stdio.h>

long factorial(long number);

int main(){
    for(int i=0;i<=10;i++){
        printf("%2d! = %1d\n", i, factorial(i));
    }
}


long factorial(long num){
    if (num <= 1){
        return 1;
    }
    else{
        return (num * factorial(num-1));
    }
}

