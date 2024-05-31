//
// Created by Administrator on 2024/5/31.
//
/**
 * F(0) = 1，F(1) = 1
    F(n) = F(n - 1) + F(n - 2)，其中 n > 1
 * @param n
 * @return
 */

#include <stdio.h>

int fibonacci(int n){
    if (n <= 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(){
    int n;
    scanf("%d", &n);
    int ans = fibonacci(n);
    printf("%d", ans);
    return 0;
}