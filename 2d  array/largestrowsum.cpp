#include<iostream>
using namespace std;


int largest(int arr[][3],int row,int col)
{
    int maxi=INT16_MIN;
    int rowindex=-1;



    for(int row=0;row<3;row++)
    {
        int sum=0;

        for(int col=0;col<3;col++)
        {
            
            sum=sum+arr[row][col];
        }

        if(sum>maxi)
        {
            maxi=sum;
            rowindex=row;
        }

        
    }

    cout<<"Maximum sum is "<<maxi<<endl;
    return row;



   

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


    int rownumber =largest(arr,3,3);
    cout<<"Maximum row number is "<<rownumber<<endl;
    

    return 0;

}

/*

Enter the element in the array
3 4 11 2 12 1 7 8 7 
Printing the array     
3 4 11 
2 12 1 
7 8 7 
Maximum sum is 22      
Maximum row number is 3




*/