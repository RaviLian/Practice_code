#include<stdio.h>

int main(){
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= i; j++) {
            // 每一列前打印\t，j==1时不打印
            j == 1 || printf("\t");
            printf("%d * %d = %d", i, j, i * j);
        }
        printf("\n");
    }
    return 0;
}
