#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int iv;                      // 1 正确
    int iv2 = 1024;              // 2 正确
    int iv3 = 999;               // 3 正确
    int &reiv;                   // 4 错误，引用未初始化。
    int &reiv2 = iv;             // 5 正确
    int &reiv3 = iv;             // 6 正确
    int *pi;                     // 7 正确
    *pi = 5;                     // 8 错误，野指针。
    pi = &iv3;                   // 9 正确
    const double di;             // 10 错误，常量应初始化。
    const double maxWage = 10.0; // 11 正确
    const double minWage = 0.5;
    const double *pc = &maxWage; // 13 正确

    return 0;
}
