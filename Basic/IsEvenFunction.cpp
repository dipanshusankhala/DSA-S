#include<iostream>
using namespace std;

// 1 for odd
// 0 for even

int IsEven(int num1)
{
    if(num1&1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int a ;
    cin>>a;

    int answer= IsEven(a);

    if(answer==1)
    {
        cout<<"The number is odd"<<endl;
    }

    else
    {
        cout<<"The number is Even"<<endl;
    }
    return 0;
}


//45
//The number is odd

//36
//The number is Even
//