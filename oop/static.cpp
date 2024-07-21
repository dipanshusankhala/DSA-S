#include<iostream>
using namespace std;


class Hero
{
    public:

    int Health;
    char Level;

    // Static data member jo object par denpend na ho class ko belong karta ho 

    static int timetocomplete;
};


// static datamember ko humesha class ke bahar hi initilizes karte 
// syntax  Datatype classname :: (scope resoulition operator) datamember = value

int Hero::timetocomplete=10;

int main()
{

    // we can access the static keyword without object creation also 
    cout<<Hero::timetocomplete<<endl;
    return 0;
}
    
