#include<iostream>
using namespace std;

void saydigit(int n,string arr[])
{
    //base case 

    if(n==0)
    {
        return;
    }

    //processing

    int digit=n%10;

    n=n/10;

    //cout<<arr[digit]<<" ";

    // Recursive call

    saydigit(n,arr);


    cout<<arr[digit]<<" ";

}

int main()
{


    int n;
    cin>>n;

    cout<<endl;

    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};

    saydigit(n,arr);

    cout<<endl;





    return 0;

}