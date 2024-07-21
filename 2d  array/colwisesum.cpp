#include<iostream>
using namespace std;


void printsum(int arr[][3],int row,int col)
{
    cout<<"Printing the sum"<<endl;


    for(int col=0;col<3;col++)
    {
        int sum=0;

        for(int row=0;row<3;row++)
        {
            
            sum=sum+arr[row][col];
        }

        cout<<sum<<" ";

        
    }


    cout<<endl;

}



int main()
{
    int arr[3][3];

    cout<<"Enter the element in the array"<<endl;

    for(int row=0;row<3;row++)
    {
        for(int col=0;col<3;col++)
        {
            cin>>arr[row][col];

        }

        
    }

    cout<<"Printing the array"<<endl;

    for(int row=0;row<3;row++)
    {
        for(int col=0;col<3;col++)
        {
            cout<<arr[row][col]<<" ";

        }

        cout<<endl;
    }


    printsum(arr,3,3);

    return 0;

}

/*

Enter the element in the array
3 4 11 2 12 1 7 8 7
Printing the array
3 4 11 
2 12 1 
7 8 7 
Printing the sum
18 15 22




*/