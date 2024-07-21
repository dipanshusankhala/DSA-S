// check the no is prime or not

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the no :- "<<endl;
    cin>>n;
    int i=2;

    while (i<n)
    {
        // no is divide 
        if(n%i==0)
        {
            cout<<"no is not prime with "<<i<<" "<<endl;
        }
        // no is not divide means that is prime 
        else 
        {
            cout<<"no is prime with "<<i<<" "<<endl;
        }

        i=i+1;
    }

    return 0;

}



//output
/*

    enter the no :- 
14
no is not prime with 2 
no is prime with 3
no is prime with 4
no is prime with 5
no is prime with 6
no is not prime with 7
no is prime with 8 
no is prime with 9
no is prime with 10
no is prime with 11
no is prime with 12
no is prime with 13


enter the no :- 
11
no is prime with 2 
no is prime with 3
no is prime with 4
no is prime with 5
no is prime with 6
no is prime with 7
no is prime with 8
no is prime with 9
no is prime with 10



*/