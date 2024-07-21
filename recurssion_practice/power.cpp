#include<iostream>
using namespace  std;

int power(int a,int b)
{
    // base case

    if(b==0)
    {
        // anything raised to 0 is 1
        return 1;

    }
    if(b==1)
    {
        // anything raised to 1 is itself a number
        return a;
    }


    int ans=power(a,b/2);

    if(b%2==0)
    {
        //number is odd 
        return ans*ans;
    }
    else
    {
        //number is even
        return a*ans*ans;
    }

}

int main()
{

    int a,b;

    cin>>a >>b;

    int ans=power(a,b);

    cout<<ans<<endl;





    return 0;
}