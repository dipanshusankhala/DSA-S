#include<iostream>
using namespace std;

class Animal
{
    public:
    
    int age;
    int weight;

    void speak()
    {
        cout<<"speaking"<<endl;
    }

};


class Dog:public Animal
{

};

int main()
{
    Dog Dipanshu;

    Dipanshu.speak();   //speaking


    cout<<Dipanshu.age<<endl;  //6422352



    return 0;
}
