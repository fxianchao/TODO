#include <iostream>
#include <stdio.h>
#include <string.h>
#include <conio.h>
using namespace std;

int main()
{
    float a = 1.0f;
    cout << (int)a << endl;
    cout << &a << endl;
    cout << (int &)a << endl;
    cout << boolalpha << ((int)a == (int &)a) << endl; // 输出
    float b = 0.0f;
    cout << (int)b << endl;
    cout << &b << endl;
    cout << (int &)b << endl;
    cout << boolalpha << ((int)b == (int &)b) << endl; // 输出
    return 0;
}
