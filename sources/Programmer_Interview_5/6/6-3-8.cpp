#include <iostream>
#include <complex>

using namespace std;

class Base
{
  public:
    Base()
    {
        cout << "Base-ctor" << endl;
    }
    ~Base()
    {
        cout << "Base-dtor" << endl;
    }
    virtual void f(int)
    {
        cout << "Base::f(int)" << endl;
    }
    virtual void f(double)
    {
        cout << "Base::f(double)" << endl;
    }
    virtual void g(int i = 10)
    {
        cout << "Base::g()" << i << endl;
    }
    void g2(int i = 10)
    {
        cout << "Base::g2()" << i << endl;
    }
};

class Derived : public Base
{
  public:
    Derived()
    {
        cout << "Derived-ctor" << endl;
    }
    ~Derived()
    {
        cout << "Derived-dtor" << endl;
    }
    void f(complex<double>)
    {
        cout << "Derived::f(complex)" << endl;
    }
    virtual void g(int i = 20)
    {
        cout << "Derived::g()" << i << endl;
    }
};

int main(int argc, char const *argv[])
{
    cout << sizeof(Base) << endl;
    // A.4  B 32  C. 20
    cout << sizeof(Derived) << endl;
    // A.4  B.8  C.36

    return 0;
}
