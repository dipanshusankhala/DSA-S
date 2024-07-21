#include<iostream>
using namespace std;

int firstocc(int array[],int size,int key)
{
    int start=0;
    int end=size-1;
    int ans=-1;

    while(start<=end)
    {
        int mid=start+(end-start)/2;

        if( array[mid]==key)
        {
            ans=mid;

            end=mid-1;

        }

        else if(key>array[mid])
        {
            start=mid+1;
        }

        else if (key<array[mid])
        {
            end=mid-1;
        }
    }


    return ans;
}


int Lastocc(int array[],int size,int key)
{
    int start=0;
    int end=size-1;
    int ans=-1;

    while(start<=end)
    {
        int mid=start+(end-start)/2;

        if( array[mid]==key)
        {
            ans=mid;

            start=mid+1;

        }

        else if(key>array[mid])
        {
            start=mid+1;
        }

        else if (key<array[mid])
        {
            end=mid-1;
        }
    }


    return ans;
}

int main()
{
    int array[5]={1,2,3,3,3};

    cout<<"The first occurence of the 3 at the index "<< firstocc(array,5,3)<<endl;
    cout<<"The Last occurence of the 3 at the index "<< Lastocc(array,5,3)<<endl;

    return  0;


}