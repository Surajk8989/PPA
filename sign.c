#include <stdio.h>

int main()
{
    int i = 10;
    signed int j = 20;
    signed int k = -30;

    unsigned int a = 40;

    int X = 10;
    short int Y = 10;
    long int Z = 20;

    printf("%d\n", i);
    printf("%d\n", j);
    printf("%d\n", k);
    printf("%d\n", a);

    printf("Size of X is : %d\n", sizeof(X));
    printf("Size of Y is : %d\n", sizeof(Y));
    printf("Size of Z is : %d\n", sizeof(Z));
    return 0;
}