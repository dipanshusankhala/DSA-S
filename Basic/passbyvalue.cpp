#include<iostream>
using namespace std;


void dummy(int n)
{
    n++;
    cout<<"Value of n is "<<n<<endl;
   
}


int main()
{
    int n;
    cin>>n;

    dummy(n);

    cout<<"value of n in main function is "<<n;

    return 0;




}

/*

15
Value of n in dummy function 16
value of n in main function is 15


here the value of n is not updated in main function beacause the n which we passed to the dummy function is nit the acyual one the dummy function creates a copy of that input argument or parameter hence he changes will done in that copied variable not in original original n in main function is not updated and remains unaffected

*/