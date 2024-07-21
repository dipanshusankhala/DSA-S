#include<iostream>
using namespace std;

int factorial(int n)
{
    int fact=1;
    for(int i=1; i<=n;i++)
    {
        fact=fact*i;
    }

    return fact;
}


int nCR( int n ,int r )
{
    int num = factorial(n);
    int denometor = factorial(r)*factorial(n-r);

    return  num/denometor;

    
}


int main()
{
    int n,r;
    cin>>n>>r;

    int ans=nCR(n,r);

    cout<<ans;
    return 0;

    

}



//8 2
//28