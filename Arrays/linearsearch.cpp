#include<iostream>
using namespace std;

bool search(int arr[],int n,int key)
{
    for(int i=0; i<n;i++)
    {
        if(arr[i]==key)
        {
            return 1;
        }
    }


    return 0;
}


int main()
{
    int array[10]={7,4,12,36,97,24,11,3,8,5};
    int size=10;

    int key=35;

    int ans = search(array,size,key);

    if(ans==1)
    {
        cout<<"element is found"<<endl;

    }

    else
    {
        cout<<"element is not found"<<endl;
    }




    

    
    return 0;



}