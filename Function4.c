#include<stdio.h>

int Addition(int No1, int No2)
{
    int Sum= 0;
    Sum = No1 + No2;
    
    return Sum;
}

int Substraction(int Data1, int Data2)
{
    int Result= 0;
    Result = Data1 - Data2;
    
    return Result;
}

int Multiplication(int Temp1, int Temp2)
{
    int Mult= 0;
    Mult = Temp1 * Temp2;

    return Mult;
}

int main()
{
    int Value1= 10;
    int Value2= 11;
    int Ans= 0;

    Ans = Addition(Value1, Value2);
    printf("Addition is: %d\n", Ans);

    Ans = Substraction(Value1, Value2);
    printf("Substraction is: %d\n", Ans);

    Ans = Multiplication(Value1, Value2);
    printf("Multiplication is: %d\n", Ans);
    
    return 0;
}