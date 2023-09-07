#include <stdio.h>

int main()
{
    const int no = 11;

    const int* p = &no;

    printf("%d\n", p);
    printf("%d\n", ++p);

    return 0;
}