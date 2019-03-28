#include <stdio.h>

main()
{
    int b = 3; // 我在这里做什么?
    int arr[] = {6, 7, 8, 9, 10};
    int *ptr = arr; // 书上代码错了
    *(ptr++) += 123;
    printf("%d,%d\n", *ptr, *(++ptr));
}
