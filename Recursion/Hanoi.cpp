//
// Created by Lantz on 2024/3/8.
//
#include <stdio.h>

// 目的是将 a 的盘子移动到 c 上, b 是辅助杆
void HanNuoTa(int n, char a, char b, char c){
    /**
     * 先将 A 上的 n-1 个盘子借助 C 移动到 B
     * 直接将 A 上的第 n 个盘子移动到 C
     * 再将 B 上的 n-1 个盘子借助 A 移动到 C
     *
     * 特殊情况：n == 1 直接将 A 上的盘子移动到 C
     */
     if(n == 1){
         printf("将编号为%d的盘子直接从%c移动到%c上\n", n, a, c);
     } else {
         HanNuoTa(n-1, a, c, b);
         printf("将编号为%d的盘子直接从%c移动到%c上\n", n, a, c);
         HanNuoTa(n-1, b, a, c);
     }

}

int main(void){
    char ch1 = 'A';
    char ch2 = 'B';
    char ch3 = 'C';
    int n;
    printf("请输入盘子数目：");
    scanf("%d", &n);
    HanNuoTa(n, ch1, ch2, ch3);
    return 0;
}