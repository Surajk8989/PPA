#include <iostream>

using namespace std;

class Demo
{
    public:
        int Addition(int A, int B)
        {
            int Ans = 0;
            Ans = A + B;
            return Ans;
        }

        int Addition(int A, int B, int C)
        {
            int Ans = 0;
            Ans = A + B + C;
            return Ans;
        }

        float Addition(float A, float B)
        {
            float Ans = 0.0f;
            Ans = A + B;
            return Ans;
        }
};

int main()
{
    Demo obj;
    int i = 10, j = 20, k = 30;
    int Ret = 0;

    Ret = obj.Addition(i, j);
    cout << "Addition is : " << Ret << "\n";

    Ret = obj.Addition(i, j, k);
    cout << "Addition is : " << Ret << "\n";

    float p = 90.0f, q = 80.0f, fRet = 0.0f;
    fRet = obj.Addition(p, q);
    cout << "Addition is : " << fRet << "\n";

    return 0;
}