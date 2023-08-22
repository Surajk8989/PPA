#include <stdio.h>

int main()
{

    int i = 1, count=0;
    printf("Enter no. of times code to be execute:");
    scanf("%d", &count);
    
    do
    {
        printf("Jay Ganesh...\n");
        i++;
    }while(i <= count);

    return 0;
}