#include<iostream>
using namespace std;

class Human
{
    public:

        int Height;
        int age;
    
        int Weight;

    int getage()
    {
        return this->age;
    }

    void setage(int age)
    {
        this->age=age;

    }

};

class male:public Human
{
    public:

    string color;

    void sleep()
    {
        cout<<"male is sleeping"<<endl;
    }

};




int main()
{

    male dipanshu;

    cout<<dipanshu.age<<endl;
    cout<<dipanshu.color<<endl;
    cout<<dipanshu.Height<<endl;
    cout<<dipanshu.Weight<<endl;
    dipanshu.sleep();
    return 0;
}


/*







1966066880

6422476
1848854559
male is sleeping


 */