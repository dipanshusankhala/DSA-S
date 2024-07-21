#include<iostream>
using namespace std;


void reverse(int array[], int size)
{
    int start=0;
    int end=size-1;

    while(start<=end)
    {
        swap(array[start],array[end]);
        start++;
        end--;
    }    
}


void printarray(int array[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }
}


int main()
{
    int array[5]={2,6,9,10,13};


    int size=5;

    reverse(array,size);
    printarray(array,size);

    return 0;
}


//output 
// 13 10 9 6 2  