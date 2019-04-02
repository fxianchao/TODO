#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    // To output "TrendNicroSoftUSCN"

    string strArr1[] = {"Trend", "Micro", "Soft"};
    string *pStrArr1 = new string[2];
    pStrArr1[0] = "US";
    pStrArr1[1] = "CN";
    for (size_t i = 0; i < sizeof(strArr1) / sizeof(string); i++)
    {
        cout << strArr1[i];
    }
    for (size_t j = 0; j < sizeof(pStrArr1) / sizeof(string); j++)
    {
        cout << pStrArr1[j];
    }
    cout << endl
         << sizeof(string) << endl;
    cout << sizeof(strArr1) << endl;
    cout << sizeof(pStrArr1) << endl;
    return 0;
}
