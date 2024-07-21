// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int s,int e)
{
    int pivot=arr[s];
    int cnt=0;
    
    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<=pivot)
        {
            cnt++;
        }
    }
    
    int pivotindex=s+cnt;
    
    swap(arr[s],arr[pivotindex]);
    int i=s;
    int j=e;
    
    while(i<pivotindex && j>pivotindex)
    {
        while(arr[i]<pivot)
        {
            i++;
        }
        
        while( arr[j]>pivot)
        {
            j--;
        }
        
        if(i<pivotindex && j>pivotindex)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        
    }
    
    return pivotindex;
    
    
}


void quicksort(int arr[],int s,int e)
{
    if(s>=e)
    {
        return;
    }
    
    int p=partition(arr,s,e);
    
    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);
}

int main() {
    
    int size=6;
    int arr[size]={6,3,8,2,7,4};
    
    quicksort(arr,0,size-1);
    
    
    
    
    for(auto i: arr )
    {
        cout<<i<<" ";
    }

    return 0;
}