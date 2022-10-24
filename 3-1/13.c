#include <stdlib.h>
#include <stdio.h>

double Power(double, int);

int main(){
    int k; double Ans;

    printf("計算3.5的k次方? 請輸入k=");
    scanf("%d", &k);
    Ans = Power(3.5, k);
    printf("3.5的%d次方=%f\n", k, Ans);
    return 0;
}


double Power(double X, int n){
    int i;  double PowerXn = 1;
    for(i=0;i<n;i++)
        PowerXn = PowerXn * X;
    return PowerXn;
}
