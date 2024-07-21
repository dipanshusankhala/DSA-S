#include<iostream>
using namespace std;

int main()
{

    int arr[5]={2,5,8,10,12};

    cout<<"Address of the first memory block of array - "<<arr<<endl;    //Address of the first memory block of array - 0x61fee8
    cout<<arr[0]<<endl;  // 0
    cout<<"Address of the first memory block of array - "<<&arr[0]<<endl; // Address of the first memory block of array - 0x61fee8

    cout<<"4th - "<<*arr<<endl;  //2 beacause the arr map the the first location of the array hence when we write the *arr it gives the value present at the 1st location

    cout<<"5th - "<<*arr+1<<endl;  //5th - 3 

    cout<<"6th - "<<*(arr+1)<<endl;

    cout<<"value of arr[2] - "<<arr[2]<<endl;

    cout<<"Value of arr[2] with the help of pointer - "<<*(arr+2)<<endl;

    /*
    
    value of arr[2] - 8
    Value of arr[2] with the help of pointer - 8

    here when we do the *(arr+2)  its means that arr is the first block and we increase these location by 2 it means that the 
    arr will go to the next 2 memory block total 8 byte aage badh jaayega 

    general formula - koi bhi ith element nikalna ho through the pointer toh *(arr+i)
    
    
    
    
    
    */


   int i=3;

   cout<<i[arr]<<endl;   //  its gives me output 10 matlab ye wrong nahi hai 


   int temp[10];

   cout<<"size of temp array "<<sizeof(temp)<<endl;

   int *ptr= &temp[0];

   cout<<"size of pointer "<<sizeof(ptr)<<endl;

   cout<<"size of pointer "<<sizeof(*ptr)<<endl;


    /*
    size of temp array 40
size of pointer 8
size of pointer 4

explain notebook

    
    
    
    */




}