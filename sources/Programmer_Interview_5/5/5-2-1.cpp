#include <iostream>

using namespace std;

int main()
{
    int a, x;
    for (a = 0, x = 0; a <= 1 && !x++; a++) // 区别
    {
        a++;
    }
    cout << a << x << endl;
    return 0;
}

// int main()
// {
//     int a, x;
//     for (a = 0, x = 0; a <= 1 && !x++;) // 区别
//     {
//         a++;
//     }
//     cout << a << x << endl;
//     return 0;
// }
