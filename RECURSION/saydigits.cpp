#include<iostream>
using namespace std;

void saydigit(int n, string arr[])
{
    //base case
    if(n==0)
    {
        return ;

    }

    //preprocessing

    int digit = n%10;
    n=n/10;

   

    saydigit(n,arr);
    cout<<arr[digit]<<endl;

    


    /*
    
    543
    three
    four
    five
    
    */


}

int main()
{
     int n ;
     cin>>n;

     string arr[11]={"zero","one","two","three","four","five","six","seven","eight","nine"};

     saydigit(n,arr);

     return  0;
     
}