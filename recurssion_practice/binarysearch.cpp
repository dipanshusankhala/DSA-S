#include<iostream>
using namespace std;


bool binarysearch(int* arr,int start,int end,int key)
{
    //base case
    //element not found
    if(start>end)
    {
        return false;
    }

    int mid=start+(end-start)/2;

    //element found

    if(arr[mid]==key)
    {
        return true;
    }

    if(arr[mid]>key)
    {
        binarysearch(arr,start,mid-1,key);
    }
    else
    {
        binarysearch(arr,mid+1,end,key);
    }

}






int main()
{


    int arr[6]={2,4,6,10,14,18};
    int size=6;
    int start=0;
    int end=size-1;
    int key=20;

    bool ans=binarysearch(arr,start,end,key);

    if(ans)
    {
        cout<<"key is found"<<endl;
    }
    else
    {
        cout<<"Key is not found"<<endl;
    }
























    return 0;
}