#include <iostream>

using namespace std;
struct S
{
    int i;
    int *p;
};

int main()
{
    S s;
    int *p = &s.i;
    p[0] = 4;
    p[1] = 3;
    cout << "p[0]=" << p[0] << "\ts.i=" << s.i << endl;
    cout << "&p[0]=" << &p[0] << "\t&s.i=" << &s.i << endl;
    cout << "p[1]=" << p[1] << "\ts.p=" << s.p << endl;
    cout << "&p[1]" << &p[1] << "\t&s.p=" << &s.p << "\t&s.p[1]=" << &s.p[1] << endl;
    cout << "1+++++++++++++++++++++1" << endl;
    s.p = p;
    cout << "p[0]=" << p[0] << "\ts.i=" << s.i << endl;
    cout << "&p[0]=" << &p[0] << "\t&s.i=" << &s.i << endl;
    cout << "p[1]=" << p[1] << "\ts.p=" << s.p << "\ts.p[1]=" << s.p[1] << endl;
    cout << "&p[1]" << &p[1] << "\t&s.p=" << &s.p << "\t&s.p[1]=" << &s.p[1] << endl;
    cout << "2+++++++++++++++++++++2" << endl;
    s.p[1] = 1;
    cout << "p[0]=" << p[0] << "\ts.i=" << s.i << endl;
    cout << "&p[0]=" << &p[0] << "\t&s.i=" << &s.i << endl;
    cout << "&s.p=" << &s.p << "\ts.p=" << s.p << endl;
    cout << "&(s.p[1])=" << &(s.p[1]) << endl;
    cout << "s.p=" << s.p << "\t&s.p=" << &s.p << endl;
    cout << "&(s.p[0])=" << &(s.p[0]) << endl;
    cout << "3+++++++++++++++++++++3" << endl;
    try
    {
        s.p[0] = 2; // 出错
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << endl;
    }
    cout << "p[0]=" << p[0] << "\ts.i=" << s.i << endl;
    cout << "&p[0]=" << &p[0] << "\t&s.i=" << &s.i << endl;
    cout << "p[1]=" << p[1] << "\ts.p=" << s.p << endl;
    cout << "&p[1]" << &p[1] << "\t&s.p=" << &s.p << "\t&s.p[1]=" << &s.p[1] << endl;
    cout << "4+++++++++++++++++++++4" << endl;
    return 0;
}