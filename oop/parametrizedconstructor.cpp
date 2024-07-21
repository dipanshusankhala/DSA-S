#include<iostream>
using namespace std;

class Hero
{

    public:
    
        int health;
        char Level;

    // default constructor

    Hero()
    {
        cout<<"This is default Constructor"<<endl;
    }

    Hero(int health)
    {
        this->health=health;
        // this comes in picture this is the pointer which stores the address of the current object 
        // this ke pass dipanshu ka address store hai 
        cout<<"this "<<this<<endl;
    }

};

int main()
{


    Hero Dipanshu(10); // parametrized constructor hai iske liye parameter pass kiye

    cout<<"Address of dipanshu "<<&Dipanshu<<endl;
    return 0;
}


/*

this 0x61ff08
Address of dipanshu 0x61ff08



*/