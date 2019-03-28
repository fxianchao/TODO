#include <stdio.h>
int main()
{
    unsigned int a = 0xfffffff7;
    unsigned char i = (unsigned char)a;
    char *b = (char *)&a;
    printf("%08x, %08x\n", i, *b);
    printf("%08x, %08x\n", i, (char)(0xf7));
    printf("%d\n", *b);
    printf("%x\n", (char)(-9));
    printf("%x\n", (char)(0xf7));
    return 0;
}
