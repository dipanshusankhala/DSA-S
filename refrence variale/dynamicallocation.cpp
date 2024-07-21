#include<iostream>
using namespace std;



int getsum(int *arr,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }

    return sum;
}

int main()
{
    // aise declare karte hai 
    //int *arr=new int[5];
/*
    cout<<arr<<endl;
    cout<<(arr+1)<<endl;
    cout<<(arr+2)<<endl;
    return 0;

    0x777fb0
    0x777fb4
    0x777fb8



    */



   int n;
   cin>>n;

   // variable size ka array 

   int *arr=new int[n]; 

   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }

   int ans=getsum(arr,n);

   cout<<"answer is "<<ans<<endl;












   return 0;
}