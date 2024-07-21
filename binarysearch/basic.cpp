#include<iostream>
using namespace std;


int BinarySearch(int array[],int size,int key)
{
    int start=0;
    int end=size-1;


    while(start<=end)
    {
        int mid=start+(end-start)/2;

        if(array[mid]==key)
        {
            return mid;
        }

        if(mid>key)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }


    return -1;
}

int main()
{
    int arr1[5]={5,8,13,15,35};

    int arr2[6]={4,6,8,15,89,99};


    int index = BinarySearch(arr1,5,15);

    cout<<"The index of 15 is "<<index<<endl;

    return 0;




}


/*

output

The index of 15 is 3

*/