#include<bits/stdc++.h>
using namespace std;

class A
{
    public:

    void display()
    {
        cout<<"A"<<endl;
    }

};

class B :public A
{
    public:

    void display()
    {
        cout<<"B"<<endl;
    }

};

class C :public A
{
    public:

    void display()
    {
        cout<<"C"<<endl;
    }
};

int main()
{
    return 0;
}