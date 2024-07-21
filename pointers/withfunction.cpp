#include<iostream>
using namespace std;

void print(int *ptr)
{
    cout<<*ptr<<endl;   // 5  agar star nahi lagate toh of course address print hota 
}

void update(int *ptr)
{
    ptr=ptr+1;
}

void update1(int *ptr)
{
    *ptr=*ptr+1;
}

int main()
{

    int value=5;

    int *p=&value;

    //cout<<p<<endl;

    //print(p);

    cout<<"Before : "<<p<<endl;

    
    update(p);
    cout<<"After : "<<p<<endl;

    /*
    
    Before : 0x61ff08
    After : 0x61ff08


    its doesnt get update because of call by value we are created the copy of the pointer and send to the function
    
    agar yahio humne * ko update kiya hota that is value at the address toh wo update ho jaata 

    address update nahi hota hai 
     value update hoti hai


    Before value of pointer 50
    After value of pointer 51
    
    */



   int navin=50;
   int *pointer=&navin;

   cout<<"Before value of pointer "<<*pointer<<endl;

   update1(pointer);

   cout<<"After value of pointer "<<*pointer<<endl;

   



    return 0;






}


