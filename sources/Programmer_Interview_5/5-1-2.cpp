#include <iostream>
using namespace std;
int main()
{
    int x = 2, y, z;
    x *= (y = z = 5);
    cout << x << endl; // z=5 ==> y=z ==> x=x*y ==> x=2*5 ==> x=10
    z = 3;
    x == (y = z);
    cout << x << endl; // y=z ==> x==y? ==> x不变 ==> x=10
    x = (y == z);
    cout << x << endl; // y==z? ==> x=1
    x = (y & z);
    cout << x << endl; // y&z ==> 0011B&0011B ==> x=3
    x = (y && z);
    cout << x << endl; // y&&z? ==> true&&true ==> x=1
    y = 4;
    x = (y | z);
    cout << x << endl; // y|z ==> 0100B|0011B ==> x=0111B ==> x=7
    x = (y || z);
    cout << x << endl; // y||z? ==> true||true ==> x=1
    return 0;
}
