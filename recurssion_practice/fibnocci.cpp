#include<iostream>
using namespace std;

int fib(int n)
{
    // base case
    if( n==1)
    {
        return n;
    }

    if(n==0)
    {
        return n;
    }

    

    return fib(n-1)+fib(n-2);
    


}

int main()
{

    int n;
    cin>>n;


    int ans=fib(n);

    cout<<endl<<ans<<endl;







    return 0;
}