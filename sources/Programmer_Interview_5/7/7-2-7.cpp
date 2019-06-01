#include <iostream>

using namespace std;
class A
{
  public:
    int _a;
    A() { _a = 1; }
    ~A(){};
    void print()
    {
        printf("%d", _a);
    }
};
class B : public A
{
  public:
    int _a;
    B() { _a = 2; }
    ~B(){};
};

int main(int argc, char const *argv[])
{
    B b;
    b.print();
    printf("%d", b._a);
    return 0;
}
