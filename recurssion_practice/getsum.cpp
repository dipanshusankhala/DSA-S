#include<iostream>
using namespace std;



int  getsum(int arr[], int size,int sum )
{
    // base condition
    if(size==0)
    {
        return 0;

    }

    //int sum=0;
    sum=sum+arr[0];

    return getsum(arr+1,size-1,sum);
}

int main()
{
    int arr[5]={2,3,4,5,6};
    int size=5;
    int sum=0;

    int ans=getsum(arr,size,sum);

    cout<<"Sum of the array is "<<ans<<endl;
























    return 0;

}

    
