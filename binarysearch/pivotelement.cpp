#include<iostream>
using namespace std;

int pivot(int array[],int size)
{
    int start=0;
    int end=size-1;

    while (start<end)
    {

        int mid = start + (end-start)/2;

        if(array[mid]>=array[0])
        {
            start=mid+1;
        }

        else
        {
            end=mid;
        }
    }


    return start;
    
}

int main()
{
    int array[5]={7,9,1,2,3};

    cout<<"pivot Element is "<<pivot(array,5)<<endl;

    return 0;


}