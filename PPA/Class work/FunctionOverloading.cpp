#include<iostream>
using namespace std;

class Demo
{
    public:
    //overloading by changing number of parameters
    //Fun@2ii
    void Fun(int i, int j)
    {}
    //Fun@3iii
    void Fun(int i, int j, int k)
    {}

    //overloading by changing sequence of parameters
    //gun@2id
    void gun(int i, double d)
    {}
    //gun@2di
    void gun(double d, int i)
    {}

    //overloading by changing data types of parameters
    //sun@2ff
    void sun(float f1, float f2)
    {}
    //sun@2cc
    void sun(char c1, char c2)

    //we cant overload by changing return type of function

    //run@2ii
    int run(int i, int j)
    {}
    //run@2ii
    float run(int i, int j)
    {}
};

int main()
{
    return 0;
}