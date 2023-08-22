#include <stdio.h>

int main()
{
    char ch = 'A';
    int i = 21;
    float f = 12.31f;
    double d = 89.90;

    printf("Size of character is : %d byte\n", sizeof(ch));
    printf("Size of integer is : %d bytes\n", sizeof(i));
    printf("Size of float is : %d bytes\n", sizeof(f));
    printf("Size of double : %d bytes\n", sizeof(d));

    printf("Base address of character is : %u\n", &ch);
    printf("Base address of integer is : %u\n", &i);
    printf("Base address of float is : %u\n", &f);
    printf("Base address of double is : %u\n", &d);

    return 0;
}