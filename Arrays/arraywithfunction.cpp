#include<iostream>
using namespace std;



//function for printing the array 

void printarray(int array[],int size)
{
    cout<<"Printing the array "<<endl;

    for(int i=0; i<size;i++)
    {
        cout<<array[i]<<" ";
    }
}

int main()
{

    int array[5]={2,5,6,9,4};

    int size=5;

    printarray(array,size);

    return 0;





}



/*

Printing the array
2 5 6 9 4




here we pass the different name to the function same as passing a variable to the it is also valid in below i passed array 1 and function gets input array hence it will work its prints the array

void printarray(int array[],int size)
{
    cout<<"Printing the array "<<endl;

    for(int i=0; i<size;i++)
    {
        cout<<array[i]<<" ";
    }
}

int main()
{

    int array1[5]={2,5,6,9,4};

    int size1=5;

    printarray(array1,size1);

    return 0;





}



*/