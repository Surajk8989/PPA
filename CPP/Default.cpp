#include <iostream>
using namespace std;

float Calculate(float Marks, float Outof = 150)
{
    float Percentage = (Marks / Outof) * 100;
    return Percentage;
}
int main()
{
    float Ans = 0.0f;
    Ans = Calculate(88, 150);
    cout << "Percentage : " << Ans << "\n";

    Ans = Calculate(88);
    cout << "Percentage : " << Ans << "\n";

    Ans = Calculate(320, 400);
    cout << "Percentage : " << Ans << "\n";

    return 0;
}