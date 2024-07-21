#include<iostream>
using namespace std;


int power(int n)
{
    // Base case humne pata hai 2 raised to 0 1 hota hai
    if(n==0)
    {
        return 1;
    }

    //int smallerProblem=power(n-1);
    //int biggerProblem=2*smallerProblem;

    //return biggerProblem;

    return 2*power(n-1);
}

int main()
{
    int n;
    cin>>n;

    int ans= power(n);
    cout<<ans<<endl;
}