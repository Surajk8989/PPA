#include <iostream>
using namespace std;

class Base
{
    public: 
        int i, j, k;

        virtual void Fun()            //1000      //concrete method
        {
            cout << "Base fun" << endl;
        }
        virtual void Gun()     //2000     //Concrete method
        {
            cout << "Base gun" << endl;
        }
        virtual void Sun() = 0;   //3000       //Absrtact method
};

class Derived : public Base
{
    public:
        int a, b;
        virtual void Fun()  //4000
        {
            cout << "Derived fun" << endl;
        }
        virtual void Run()  //6000
        {
            cout << "Derived run" << endl;
        }
        void Sun()          //7000
        {
            cout << "Derived sun" << endl;
        }
};

int main()
{
    cout << "size of Base : " << sizeof(Base) << endl;
    cout << "size of Derived : " << sizeof(Derived) << endl;

    Base *bp = new Derived;
    bp->Fun();      //CALL  4000
    bp->Sun();      //CALL  7000

    return 0;
}