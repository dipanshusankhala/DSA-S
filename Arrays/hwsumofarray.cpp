// take the input array and print the sum of its all the element


#include<iostream>
using namespace std;


int sum(int array[], int size)
{
    int sum=0;

    for(int i=0; i<size ;i++)
    {
        sum= sum+array[i];
    }

    return sum;
}

int main()
{
    int n;
    cout<<"Enter the size of an array "<<endl;
    cin>>n;

    int numbers[50];
    cout<<"Enter the values in an array "<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>numbers[i];
    }

    int ans= sum(numbers,n);

    cout<<"The sum of the element is "<<ans<<endl;

    return 0;



}