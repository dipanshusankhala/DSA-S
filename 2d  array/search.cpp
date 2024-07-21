#include<iostream>
using namespace std;

// yaha par column ki value pass karni padti hai warna error aata hai

bool ispresent(int arr[][4],int target,int row,int col)
{
    for(int row=0;row<3;row++)
    {
        for(int col=0;col<4;col++)
        {
            if(arr[row][col]==target)
            {
                return true;
            }

        }

        
    }

    return false;

    
}


int main()
{
    int arr[3][4];

    cout<<"Enter the element in the array"<<endl;

    for(int row=0;row<3;row++)
    {
        for(int col=0;col<4;col++)
        {
            cin>>arr[row][col];

        }

        
    }

    cout<<"Printing the array"<<endl;

    for(int row=0;row<3;row++)
    {
        for(int col=0;col<4;col++)
        {
            cout<<arr[row][col]<<" ";

        }

        cout<<endl;
    }


    cout<<"Enter the element to be search"<<endl;
    int target;
    cin>>target; 


    if(ispresent(arr,target,3,4))
    {
        cout<<"Element is found"<<endl;
    }
    else
    {
        cout<<"Element is not found"<<endl;
    }

    return 0;
}

/*

Enter the element in the array
1 2 3 4 5 6 7 8 9 10 11 12
Printing the array
1 2 3 4 
5 6 7 8 
9 10 11 12 
Enter the element to be search
10
Element is found



Enter the element in the array
1 2 3 4 5 6 7 8 9 10 11 12
Printing the array
1 2 3 4
5 6 7 8
9 10 11 12
Enter the element to be search
13
Element is not found



*/


