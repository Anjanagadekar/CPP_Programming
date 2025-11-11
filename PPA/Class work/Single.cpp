#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;

    void fun()
    {
        cout<<"inside base fun\n";
    }

};

class Derived : public Base
{
    public:
        int x;

    void gun()
    {
        cout<<"inside derived gun\n";
    }
};

int main()
{
    Base bobj;
    Derived dobj;

    cout<<"size of Base class"<<sizeof(bobj)<<"\n";
    cout<<"size of Derived class"<<sizeof(dobj)<<"\n";

    return 0;

}