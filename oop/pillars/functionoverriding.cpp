#include<iostream>
using namespace std;


class Animal
{
    public:

        void speak()
        {
            cout<<"Speaking"<<endl;
        }

};

class Dog:public Animal
{
    public:

    // method over riding 

        void speak()
        {
            cout<<"Barking"<<endl;
        }

};

int main()
{
    Dog D1;
    D1.speak(); //Barking
    return 0;
}