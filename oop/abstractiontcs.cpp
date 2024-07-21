#include<bits/stdc++.h>
using namespace std;

class A
{
    public:
    
    virtual void show()
    {
        cout<<"A is call"<<endl;
    }
};

class B: public A
{
    public:

    void print()
    {
        cout<<"hi"<<endl;
    }

};

int main()
{
    B obj1;
    obj1.print();

    return 0;
}