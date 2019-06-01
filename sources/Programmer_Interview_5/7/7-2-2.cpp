#include <iostream>
#include <cstring>

using namespace std;

char *GetMemory(char *p, int num)
{
    p = (char *)malloc(sizeof(char) * num);
    return p;
}

int main(int argc, char const *argv[])
{
    char *str = nullptr;
    str = GetMemory(str, 100);
    strcpy(str, "hello");
    cout << str;
    return 0;
}
