#include <stdio.h>

int main() {
    // 利用正则表达式读取一段包含空格的字符串
    // [^\n]的意思为除了换行符其他字符都可以
    char str[100];
    scanf("%[^\n]s", str);
    printf("%s", str);
    return 0;
}
