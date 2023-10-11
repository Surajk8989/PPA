#include <iostream>
using namespace std;

class Base
{
    public:
        int i,j,k;
        void Fun()
        {
            cout << "Inside Base fun\n";
        }
};

class Derived : public Base
{
    public:
        int a, b;
        void Gun()
        {
            cout << "Inside derived gun\n";
        }

};

int main()
{
    Base bObj;
    Derived dObj;

    cout << sizeof(bObj) << "\n";
    cout << sizeof(dObj) << "\n";

    bObj.Fun();

    dObj.Fun();
    dObj.Gun();
    
    return 0;
}