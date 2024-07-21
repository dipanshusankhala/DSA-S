#include<iostream>
using namespace std;

int main()
{
    int  num=5;

    cout<<"Value of num is : "<<num<<endl;   // output - Value of num is : 5

    // address of operator  &

    cout<<"Address of the num is : "<<&num<<endl; // output - Address of the num is : 0x61ff0c

    int *ptr = &num;  // humne ek pointer banaya jisme address store hai num ka

    cout<<"ptr without * "<<ptr<<endl;  //output - ptr without * 0x61ff08  !!! beacause the ptr stores the address of the num hence directly address will print out
    cout<<"value at ptr "<<*ptr<<endl;  // output - value at ptr 5    !!! abhi ptr par num ka address ka store hai so humne pass kiya ki value of ptr i.e *ptr ptr par jo address hai uska value de dijiye 

    double d=4.2;
    double *p=&d;

    cout<<"Size of integer : "<<sizeof(num)<<endl;
    cout<<"Size of double : "<<sizeof(d)<<endl;
    cout<<"Size of integer pointer : "<<sizeof(ptr)<<endl;
    cout<<"Size of double pointer : "<<sizeof(p)<<endl;
    
    







    return 0;
}


/*


here size of every pointer is same for all int and double char etc
and its depends on the os and the machine
for 32 bit its 4 byte
for 64 bit it is 8 byte 


Size of integer pointer : 4
Size of double pointer : 4



*/