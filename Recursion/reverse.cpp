//
// Created by Administrator on 2024/5/31.
//
#include <stdio.h>

int reverse(int n){
    /**
     * 12
     * 129 % 10 = 9
     */
    if(n == 0)
        return reverse(n);
    int res = 0;
    int m = n % 10;
    if(m > 0){
        res = res * 10 + m;
        printf("%d", res);
    } else if(m == 0)
        res *= 10;
    return reverse(n / 10);
}

int main(void){
    int n;
    scanf("%d", &n);
    printf("%d", reverse(n));
    return 0;
}