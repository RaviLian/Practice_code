#include <stdio.h>
/*去掉倍数
 *读入两个数字n和m，n的大小不超过10，m的大小不超过10000；
 *读入n个不相同的正整数，输出1-m中，有哪些数字无法被这n个正整数中的任意一个整除
 * **/
int check[1005] = {0};
int main(){
    int n, m, num;
    scanf("%d%d", &n, &m);
    // 每次循环都存储一个num，然后将num的倍数标记为1
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        for (int j = num; j <= m; j+= num) {
            check[j] = 1;
        }
    }
    // 打印结果
    for (int i = 1; i <= m; i++) {
        if (check[i] == 1) continue;
        printf("%d ", i);
    }
    return 0;
}
