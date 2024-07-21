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

class Tommy:public Dog
{

};

int main()
{
   Tommy Dipanshu;

   Dipanshu.speak(); // speaking 

   cout<<Dipanshu.age<<endl; //6422


    return 0;
}
