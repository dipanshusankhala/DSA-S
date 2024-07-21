// sum of numbers from 1 to n  command will be extecuted till condition statisfy

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the no - ";
    cin>>n;


    int sum =0;
    int i=1;

    while(i<=n)
    {
        sum=sum+i;
        i=i+1;
    }

    cout<<endl;
    cout<<sum<<endl;

    return 0;

}