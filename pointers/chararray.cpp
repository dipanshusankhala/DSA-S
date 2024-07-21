#include<iostream>
using namespace std;

int main()
{
    
    int arr[5]={1,2,3,4,5};

    char ch[6]="abcde";

    cout<<arr<<endl;

    cout<<ch<<endl;


    /*
    
    0x61fefc
    abcde

    bhai sahab !!!!!!!!!!!!!!!!!!
    jab humne int array ko sirf arr se print karwaya toh usne address de diya 1st element ka 

    but jab humne char array ko print karwaya toh usne address print nahi kiya usne pura string content print kar diya

    
    
    */


   char ch1[5]="abcd";
   char *c=&ch1[0];
   cout<<c<<endl;

   //   abcd output 
   // entire string print hogi but yahi array ke case main hum address store kar rahe hote toh sidha address print ho jaata tha idhar sirf string hi print hoga

   char temp ='z';
   char *t=&temp;
   cout<<t<<endl;






    return 0;
}


