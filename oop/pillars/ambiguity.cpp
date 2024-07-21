#include<iostream>
using namespace std;

class A
{
    public:

    void abc()
    {
        cout<<"Inside class A"<<endl;
    }
};

class B
{
    public:

    void abc()
    {
        cout<<"inside class B "<<endl;
    }
};

class C :public A,public B
{

}; 

int main()
{
    C c1;

    c1.A::abc();
    c1.B::abc();
    return 0;
}