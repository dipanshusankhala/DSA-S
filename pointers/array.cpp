#include<iostream>
using namespace std;

int getsum(int arr[],int n)
{

    cout<<"Size of the array after the pass "<<sizeof(arr)<<endl;

    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }

    return sum;
}

int main()
{
    int arr[5]={1,2,3,4,5};

    cout<<"The original size of array - "<<sizeof(arr)<<endl;

    int total=getsum(arr,5);

    cout<<"Sum of the array is the "<<total<<endl;

    return 0;
}


/*



The original size of array - 20   
Size of the array after the pass 4
Sum of the array is the 15


here we pass the array of the size 20 i.e 5*4 but after passing it has size only 4/8 becoz the we cannot pass the actual array to
the function we always pass the pointer to the function which conists of the 1st location of the array 










*/