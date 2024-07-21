#include<iostream>
using namespace std;

void swapalternate(int array[], int size)
{
    for(int i=0; i<size;i=i+2)
    {
        if(i+2<size)
        {
            swap(array[i],array[i+1]);
        }
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
    int array[6]={1,2,3,4,5,6};
    int size=6;

    swapalternate(array,size);
    printarray(array,size);

    return 0;


}



/*

output

2 1 4 3 5 6 



*/