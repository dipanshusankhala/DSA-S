#include<iostream>
using namespace std;

bool issorted(int arr[], int size )
{

    // base condition
    if( size == 0 || size == 1)
    {
        return true;
    }

    // logic
    if(arr[0]>arr[1])
    {
        return false;
    }
    else
    {
        bool remaining=issorted(arr+1,size-1);
        return remaining;
    }

}


int main()
{
    int arr[]={2,3,10,8,9};
    int size=5;

    bool ans=issorted(arr,size);
    cout<<endl;


    if(ans)
    {
        
        cout<<"array is sorted"<<endl;
    }
    else
    {
        cout<<"array is not sorted"<<endl;
    }



    return 0;


}