#include<iostream>
using namespace std;


void update ( int array[], int n)
{
    cout<<"We are  in update function "<<endl;

    array[0]=120;

    for(int i=0; i<n;i++)
    {
        cout<<array[i]<<" ";
    }

    cout<<endl;

}

int main()
{

    int array[5]= { 2,5,8,9,12};

    int n = 5;

    update(array,n);

    cout<<"We are in main function "<<endl;

    for(int i=0; i<n;i++)
    {
        cout<<array[i]<<" ";
    }

    return 0;





}


/*



ouput without updtation

We are  in update function
2 5 8 9 12
We are in main function
2 5 8 9 12


output with updtation

We are  in update function 
120 5 8 9 12
We are in main function
120 5 8 9 12



here according to pass by value the value of arr[0] should not be updated but in update function change the value at 1st index is reflected in main function becoz as like variable it does not create a copy of array to pass its pass its aaddress
so if we change the array in another function then its value is updated in main function.


 
*/