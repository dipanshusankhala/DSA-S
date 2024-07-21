#include<iostream>
using namespace std;


int main()
{

    //declaration of an array

    int number[15];

    //accessing an array

    //cout<<"value at 1 location "<<number[0]<<endl;

    //cout<<"value at 13 location "<<number[12]<<endl;

   // initilization an array 

   int second[3]={5,7,11};

    

    //accessing an array

    cout<<"value at 2 index "<<second[2]<<endl;


    int array3[15]={2,7};

    //print the array

    int n=15;

    cout<<"printing the array "<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<array3[i]<<" ";
    }

    /*
    
    output

    printing the array

    2 7 0 0 0 0 0 0 0 0 0 0 0 0 0
    
    */


   // initilizating all the location with the zero

    int array4[10]={0};

    int m=10;

    cout<<"printing the array "<<endl;

    for(int i=0;i<m;i++)
    {
        cout<<array4[i]<<" ";
    }

    /*

    output
    
    0 0 0 0 0 0 0 0 0 0
    
    
    */


   // initilizating all the location with the one (it is not possible with one)
   
    int array5[10]={1};

    int p=10;

    cout<<"printing the array "<<endl;

    for(int i=0;i<p;i++)
    {
        cout<<array5[i]<<" ";
    }

    /*

    output
    
    printing the array

    1 0 0 0 0 0 0 0 0 0
    
    
    */




    cout<<endl<<"Everything is fine "<<endl;






    


   
    return 0;
}