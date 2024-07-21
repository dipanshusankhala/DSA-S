#include<iostream>
using namespace std;

void search(int arr[],int n,int key)
{
    for(int i=0; i<n;i++)
    {
        if(arr[i]==key)
        {
            cout<<"Element found on "<<i<<" index"<<endl;
        }
        
       
    }




    
}


int main()
{
    int array[10]={7,4,12,36,97,24,11,3,8,5};
    int size=10;

    int key=3;

    search(array,size,key);

    


    return 0;



    



    

    
    



}


/*

Element found on 7 index


*/