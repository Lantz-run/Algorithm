//
// Created by Lantz on 2024/3/25.
//
#include <stdio.h>
// A 的盘子借助 B 移动到 C 上
void Hanoi01(int n, char a, char b, char c){
    /**
     * 1、先把 A 上的 n-1 个盘子借助 C 移动到 B 上
     * 2、直接把 A 上的第 n 个盘子移动到 C 上
     * 3、然后把 B 上的 n-1 个盘子借助 A 移动到 C 上
     */
     if(n == 1){
         printf("直接把%c上的%d个盘子移动到%c上\n", a, n, c);
     }
    Hanoi01(n - 1, a, c, b);
    printf("直接把%c上的%d个盘子移动到%c上\n", a, n - 1, c);
    Hanoi01(n - 1, b, a, c);
}

int main(void){
    char ch1 = 'A';
    char ch2 = 'B';
    char ch3 = 'C';
    int n;
    printf("请输入盘子数%d", n);
    scanf("%d", &n);
    Hanoi01(n, ch1, ch2, ch3);
    return 0;
}