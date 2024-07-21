#include<iostream>
using namespace std;

class Hero
{
    private:
        int Health;
    
    public:
        char level;

    int gethealth()
    {
        return Health;
    }

    char getlevel()
    {
        return level;
    }

    // creating the setter 
    // we can also put the condition that the only particular user is change the value restrict the set method 

    void setHealth(int h)
    {
        Health=h;
    }

    void setlevel(char ch)
    {
        level=ch;
    }


};

int main()
{
    Hero Dipanshu;

    cout<<"Health of Dipanshu is : "<<Dipanshu.gethealth()<<endl;

    Dipanshu.setHealth(70);

    cout<<"Health of Dipanshu is : "<<Dipanshu.gethealth()<<endl;

    /*
    Health of Dipanshu is : 6422352
    Health of Dipanshu is : 70   
    */

   cout<<"Level of Dipanshu is : "<<Dipanshu.getlevel()<<endl;

   Dipanshu.setlevel('A');

   cout<<"Level of Dipanshu is : "<<Dipanshu.getlevel()<<endl;


   /*
   
   Level of Dipanshu is : K
   Level of Dipanshu is : A    


   
   */





    

    return 0;
}