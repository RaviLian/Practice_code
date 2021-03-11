#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printRandNum() {
    for (int i = 1; i <= 100; i++) {
        printf("%d\t", rand() % 100);
        if ( i % 10 == 0)
            printf("\n");
    }
}

int main() {
   // printf("%d\n", rand() % 1000); // 永远输出固定值
    
   // srand(time(0));
   // printf("%d\n", rand() % 1000); //每次运行都不同
    printf("\033[1;4;33m随机输出100个1~100的随机数：\033[0m\n");
    printRandNum();
    return 0;
}
