#include <iostream>
#include <windows.h>
#define BUF_SIZE 30

using namespace std;

class A
{
  private:
    const /* C */ BYTE *const /* D处应被移除 */ m_pBuf;

  public:
    A();
    ~A(){};
    inline const /* A */ BYTE *GetBuffer() const /* B */ { return m_pBuf; }
    int Pop(void);
};

A::A() : m_pBuf()
{
    BYTE *pBuf = new BYTE[BUF_SIZE];
    if (pBuf == NULL)
    {
        return;
    }
    for (size_t i = 0; i < BUF_SIZE; i++)
    {
        pBuf[i] = i;
    }
    m_pBuf = pBuf; // 此处报错
}

int main(int argc, char const *argv[])
{
    A a;
    const /* E */ BYTE *pB = a.GetBuffer();
    if (pB != NULL)
    {
        for (size_t i = 0; i < BUF_SIZE; i++)
        {
            printf("%u", pB[i++]);
        }
    }
    system("pause");

    return 0;
}
