#include<iostream>
using namespace std;

int main()
{
    int i=5;
    int *p1=&i;
    int **p2=&p1;

    cout<<"Printing P1 - "<<p1<<endl;  // content of P
    //cout<<"printing address of p1 - "<<&p1<<endl;   // address of p

    cout<<*p2<<endl;

    // agar i ko access kaarna hoga toh

    cout<<i<<endl;
    cout<<*p1<<endl;
    cout<<**p2<<endl;

    /*
    
    5
    5
    5
    

    upar ke 3 statement same value denge

    */


   cout<<&i<<endl;
   cout<<p1<<endl;
   cout<<*p2<<endl;

   /*
   0x61ff08
   0x61ff08
   0x61ff08

   3 statement 710 ko print karwa rahi hai 
   
   */





    return 0;

}