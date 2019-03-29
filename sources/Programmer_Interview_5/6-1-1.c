#include <stdio.h>
#define SUB(x, y) x - y
#define ACCESS_BEFORE(element, offset, value) *SUB(&element, offset) = value

int main(int argc, char const *argv[])
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    ACCESS_BEFORE(array[5], 4, 6); // 此处报错
    for (size_t i = 0; i < 10; i++)
    {
        printf("%d", array[i]);
    }

    return 0;
}
