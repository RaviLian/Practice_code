#include <stdio.h>
#include <stdarg.h>

void my_scanf1(char *str, int *ret) {
  int num = 0, flag = 0;
  if (str[0] == '-') str += 1, flag = 1;
  for (int i = 0; str[i]; i++) {
    num = num * 10 + (str[i] - '0');
  }
  if (flag) num = -num;
  *ret = num;
  return ;
}

// Todo : 实现可变参数的myscanf和myprint

int main(int argc, char const *argv[]) {
  char str[1000];
  int n = 65;
  scanf("%s", str);
  my_scanf1(str, &n);
  printf("n = %d\n", n);
  return 0;
}
