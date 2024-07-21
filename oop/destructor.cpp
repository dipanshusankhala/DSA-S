#include<iostream>
using namespace std;


class Hero
{
    public:
        int Health;
        char Level;

    // constructor
    Hero()
    {
        cout<<"Constructor Bhaiya Called"<<endl;
    }


    // destructor

    ~Hero()
    {
        cout<<"Destructor Bhaiya called"<<endl;
    }



};

int main()
{

    Hero Dipanshu;

    Hero *preeti=new Hero;

    //manually
    delete preeti;
    return 0;
}


/*

Constructor Bhaiya Called
Constructor Bhaiya Called
Destructor Bhaiya called


constructor dono object ke liye seprate call hua but destructor ek hi baar call hua static ke liye 

dyanmic main destructor khud se call karna padta manually memory free karni padti



after writing delete preeti

Constructor Bhaiya Called
Constructor Bhaiya Called
Destructor Bhaiya called 
Destructor Bhaiya called 






*/