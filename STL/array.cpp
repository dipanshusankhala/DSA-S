#include<iostream>
#include<array>
using namespace std;

int main()
{
    int basic[3]={1,2,3};

    array<int,4> a={1,2,3,4};


    int size=a.size();

    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }


    cout<<"Element at index 3"<<a.at(3)<<endl;

    cout<<"empty or not "<<a.empty()<<endl;

    cout<<"First element "<<a.front()<<endl;

    cout<<"Lats elemet "<<a.back()<<endl;

    return 0;
}