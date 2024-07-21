#include<iostream>
using namespace std;

int main()
{
    int array[]={1,2,3,4,5};

    int sizeofarray= sizeof(array)/sizeof(int);

    cout<<"The size of array is "<<sizeofarray<<endl;

    // output
    //The size of array is 5



    int array1[4]={2,3};
    int sizeofarray1= sizeof(array1)/sizeof(int);
    cout<<"The size of array1 is "<<sizeofarray1<<endl;

    /*
    
    here the output is the 

    The size of array is 5 
    The size of array1 is 4 


    but we just mention 2 element in the array size is showing as 4 becoz all the other position will fill with the zero 
    
    
    
    
    
    
    */



    return 0; 
}