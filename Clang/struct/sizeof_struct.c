#include <stdio.h>

struct Data1 {
  int a;
  char b;
  char c;
}Data1;

struct Data2 {
  char b;
  int a;
  char c;
}Data2;

int main(int argc, char const *argv[]) {
  printf("sizeof(Data1) = %lu\n",sizeof(Data1)); // 8
  printf("sizeof(Data2) = %lu\n",sizeof(Data2)); // 12
  return 0;
}
