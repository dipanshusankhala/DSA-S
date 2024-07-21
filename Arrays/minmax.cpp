#include<iostream>
using namespace std;



int getmax(int array[], int size)
{
    int max= INT16_MIN;

    for(int i=0 ; i<size;i++)
    {
        if(array[i]>max)

        max=array[i];
    }


    return max;
}




int getmin(int array[], int size)
{
    int min= INT16_MAX;

    for(int i=0 ; i<size;i++)
    {
        if(array[i]<min)

        min=array[i];
    }


    return min;
}

int main()
{

    int size;
    cout<<"Enter the size of an array "<<endl;
    cin>>size;

    int num[100];

    // taking input an array 

    cout<<"ENter the element in an array "<<endl;

    for(int i=0;i<size;i++)
    {
        cin>>num[i];
    }



    cout<<"Maximum Number of an array is "<<getmax(num,size)<<endl;

    cout<<"Minimum Number of an arraay is "<<getmin(num,size)<<endl;

    return 0;

}


/*

Enter the size of an array 
5
ENter the element in an array 
12 56 5 43 23
Maximum Number of an array is 56
Minimum Number of an arraay is 5








*/