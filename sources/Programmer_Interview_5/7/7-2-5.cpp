#include <iostream>

using namespace std;
class A
{
  private:
    int m_a;
    int m_b;

  public:
    A()
    {
        m_a = 1;
        m_b = 2;
    }
    ~A() {}
    void fun()
    {
        printf("%d%d", m_a, m_b);
    }
};
class B
{
  private:
    int m_c;

  public:
    B() { m_c = 3; }
    ~B() {}
    void fun()
    {
        printf("%d", m_c);
    }
};

int main(int argc, char const *argv[])
{
    A a;
    B *pb = (B *)(&a);
    pb->fun();

    return 0;
}
