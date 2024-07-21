#include<iostream>
using namespace std;

int main()
{
    int i=5;

    //int *ptr=&i;        
    //int *ptr;     ptr=&i;
    // dono ek hi hai 
    

    int *ptr;
    ptr=&i;

    cout<<ptr<<endl;  // 0x61ff08 - content  of ptr
    cout<<*ptr<<endl; // value at this address i.e 5

    int num=5;
    int a=num;
    a++;
    cout<<"value of num after increment a "<<num<<endl;

    int *p=&num;
    cout<<"num before : "<<num<<endl;  // num before : 5
    (*p)++;
    cout<<"num after : "<<num<<endl;   // num after : 6


    //copying a POINTER

    int *q=p;

    cout<<q<<" - "<<p<<endl;   // 0x61fef8 - 0x61fef8
    cout<<*q<<" - "<<*p<<endl; // 6 - 6


    // pointer increment 

    int j=3;
    int *t=&j;
    (*t)++;
    cout<<*t<<endl;  // 4
    cout<<j<<endl;  // 4
    cout<<"Before t - "<<t<<endl;   //Before t - 0x61fef0
    t++;
    cout<<"After t - "<<t<<endl;   //  After t - 0x61fef4  

    // idhar sirf t ko ++ kiya toh wo ek int address aage jaayega matlab int total 4 bytes lete na so wo 4 bytes chodke agle wale block par chale jaayega
    // agli location par chala jaayega array rahega toh agle element par chala jaayega 


    return 0;
}