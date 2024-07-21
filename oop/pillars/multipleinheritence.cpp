#include<iostream>
using namespace std;

class Animal
{
    public:
    
    int age;
    int weight;

    void Bark()
    {
        cout<<"Barking"<<endl;
    }

};


class Human
{
    public:
    string color;

    public:

    void Speak()
    {
        cout<<"Spealing"<<endl;
    }

};

//multiple inheritance

class Hybrid:public Animal,public Human
{

};




int main()
{
   Hybrid Dipanshu;

   Dipanshu.Bark();  //Barking
   Dipanshu.Speak();  //Spealing
   

   cout<<Dipanshu.age<<endl;  // 1978387648



    return 0;
}
