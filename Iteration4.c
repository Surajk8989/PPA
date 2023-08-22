#include <stdio.h>

int main()
{
    int i = 1, count=0;
    printf("Enter no. of times code to be execute:");
    scanf("%d", &count);
    
    while(i <= count)
    {
        printf("Jay Ganesh...\n");
        i++;
    }

    return 0;
}