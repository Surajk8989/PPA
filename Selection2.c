#include <stdio.h>

int main()
{
    int Standard =0;
    printf("Primary School Portal\n");

    printf("Enter your Standard : \n");
    scanf("%d", &Standard);

    if(Standard == 1)
    {
        printf("Your exam is at 1.00 PM\n");
    }
    else if(Standard == 2)
    {
        printf("Your exam is at 2.00 PM\n");
    }
    else if(Standard == 3)
    {
        printf("Your exam is at 3.00 PM\n");
    }
    else if(Standard == 4)
    {
        printf("Your exam is at 4.00 PM\n");
    }
    else
    {
        printf("Invalid Standard\n");
    }


    return 0;
}