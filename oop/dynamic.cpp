#include<iostream>
using namespace std;

class Hero
{
    public:

        int Health;
        char level;


};

int main()
{
    // static allocation 

    Hero Dipanshu;
    Dipanshu.Health=70;
    Dipanshu.level='A';

    cout<<"Health of Dipanshu : "<<Dipanshu.Health<<endl;
    cout<<"level of Dipanshu : "<<Dipanshu.level<<endl;


    // Dynamically Allocation

    Hero *Preeti = new Hero;

    Preeti->Health=80;
    Preeti->level='B';

    cout<<"Health of Preeti is : "<<Preeti->Health<<endl;

    cout<<"Level of Preeti is : "<<Preeti->level<<endl;


    return 0;
}


/*

Health of Dipanshu : 70
level of Dipanshu : A
Health of Preeti is : 80
Level of Preeti is : B
*/