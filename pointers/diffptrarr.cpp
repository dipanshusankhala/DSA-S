#include<iostream>
using namespace std;

int main()
{
    int arr[10]={4,7,9,10};

    //cout<<&arr[0]<<endl;
    //cout<<arr<<endl;
    cout<<&arr<<endl;

    /*
    
    0x61fee8
    0x61fee8
    0x61fee8
    */

   int *ptr=&arr[0];

   cout<<&ptr<<endl;

   /*
   
    0x61fee8
    0x61fee4

    ans different aayega 
   
   */




   return 0;
}