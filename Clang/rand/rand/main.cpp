//
//  main.cpp
//  rand
//
//  Created by RaviLian on 2021/5/18.
//

#include <iostream>
#include <cmath>
#include <time.h>

int main(int argc, const char * argv[]) {
    int a[1000][1000];
    int b;
    for (int i = 0; i < 1000; i++)
    {
        for (int j = 0; j < 1000; j++)
        {
            a[i][j] = i + j;
        }
    }
    // 使用clock()构造clock_t对象(实际上是long类型的变量)
    clock_t t1 = clock();
    for (int j = 0; j < 1000; j++)
    {
        for (int i = 0; i < 1000; i++)
        {
            b = a[i][j];
        }
    }
    // 计算clock差，除以clock数/每秒，即可求出秒数
    // 将秒数乘以1000得到毫秒数
    std::cout << (clock() - t1) * 1.0 / CLOCKS_PER_SEC * 1000 << std::endl;
    return 0;
}
