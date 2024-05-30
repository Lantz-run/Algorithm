//
// Created by Lantz on 2024/3/8.
//
#include <stdio.h>

// Ŀ���ǽ� a �������ƶ��� c ��, b �Ǹ�����
void HanNuoTa(int n, char a, char b, char c){
    /**
     * �Ƚ� A �ϵ� n-1 �����ӽ��� C �ƶ��� B
     * ֱ�ӽ� A �ϵĵ� n �������ƶ��� C
     * �ٽ� B �ϵ� n-1 �����ӽ��� A �ƶ��� C
     *
     * ���������n == 1 ֱ�ӽ� A �ϵ������ƶ��� C
     */
     if(n == 1){
         printf("�����Ϊ%d������ֱ�Ӵ�%c�ƶ���%c��\n", n, a, c);
     } else {
         HanNuoTa(n-1, a, c, b);
         printf("�����Ϊ%d������ֱ�Ӵ�%c�ƶ���%c��\n", n, a, c);
         HanNuoTa(n-1, b, a, c);
     }

}

int main(void){
    char ch1 = 'A';
    char ch2 = 'B';
    char ch3 = 'C';
    int n;
    printf("������������Ŀ��");
    scanf("%d", &n);
    HanNuoTa(n, ch1, ch2, ch3);
    return 0;
}