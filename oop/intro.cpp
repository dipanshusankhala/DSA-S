#include<iostream>

using namespace std;

// if we create a empty class object and tries to get that object size then it is shown by 1 instead of 0 
// mempry allocates to that for tracking and identification

class Hero
{
    public:
    int Health;
    //public:   public ke niche ke sab public ho jaate unko hum kahi bhi access kar sakte hai 
    char level;
    
    //string name[100];
};


int main()
{
    Hero Dipanshu;

    Dipanshu.Health=70;
    Dipanshu.level='A';

    cout<<"Size of the Dipanshu "<<sizeof(Dipanshu)<<endl;

    cout<<"Health "<<Dipanshu.Health<<endl;
    cout<<"Level "<<Dipanshu.level<<endl;
    /*
    
    Size of the Dipanshu 8
    Health 70
    Level A
    
    */

    return 0;

}