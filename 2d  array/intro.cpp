#include<iostream>
using namespace std;

int main()
{
    // create 2d array

    //int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    /*

    output 

    1 2 3 4
    5 6 7 8
    9 10 11 12


    */
    int arr[3][4];
    cout<<"Enter the element in the array"<<endl;

    // its take an input from row wise  


    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>arr[i][j];
        }
    }
    
/*
   output 

    1 2 3 4
    5 6 7 8
    9 10 11 12
    
*/ 


// for column wise input 


/*


for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[j][i];
        }
    }
*/

    

    /*
        printing the array
        1 4 7 10
        2 5 8 11
        3 6 9 12
    
    
    
    
    
    */

    cout<<"printing the array"<<endl;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j]<<" ";

        }
        cout<<endl;
    }
}