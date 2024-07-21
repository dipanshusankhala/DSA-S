#include<iostream>
using namespace std;

class Hero
{
    public:
        int Health;
        char level;
    

    // creating a constructor

    Hero()
    {
        cout<<"Constructor Called !!!!! "<<endl;
    }

};

int main()
{
    cout<<"HI "<<endl;

    Hero Dipanshu;

    cout<<"Hello "<<endl;

    return 0;
}


/*

HI 
Constructor Called !!!!! 
Hello


Default consriuctor is called 



*/