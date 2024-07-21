#include<iostream>
using namespace std;

void update1(int n)
{
    n++;
}


void update2(int& n)
{
    n++;
}

int main()
{

    /*
    int i=5;

    //creating a refrence variable 
    // refrence variable means the variable with different name but same memory address or value 

    int &j=i;

    cout<<i<<endl;   //5
    //cout<<j<<endl;    // 5
    i++;
    cout<<i<<endl;  //6
    cout<<j<<endl;  //6 ek ko increment kiya toh dono increment honge

    j++;
    cout<<i<<endl;  // 7
    cout<<j<<endl;  // 7 

*/



int n=5;


/*
cout<<"Before n : "<<n<<endl;   //Before n : 5

update1(n);

cout<<"After n : "<<n<<endl;  // After n : 5

// idhar n ki value update nahi hui kyu ki humne pass by value bheja hai so uski ek copy create hoke jaati another function
// main so oriinal value ko kuch nahi hota

*/



cout<<"Before n : "<<n<<endl;  //Before n : 5
update2(n);
cout<<"After n : "<<n<<endl;   //After n : 6

// idhar cahnge hua 




















    return 0;




}