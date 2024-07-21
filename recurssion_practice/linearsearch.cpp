#include<iostream>
using namespace std;


bool linear(int arr[],int size,int key)
{
    // base case 
    if(size==0)
    {
        return false;
    }

    // logic
    if(arr[0]==key)
    {
        return true;
    }
    else
    {
        linear(arr+1,size-1,key);
    }


}

int main()
{

    int arr[6]={3,5,1,2,6,9};
    int size=6;
    int key=2;

    bool ans=linear(arr,size,key);

    if(ans)
    {
        cout<<"Key Found"<<endl;

    }
    else
    {
        cout<<"Key Not Found"<<endl;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;

}
