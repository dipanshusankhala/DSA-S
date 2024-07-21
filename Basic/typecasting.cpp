#include<iostream>
using namespace std;

int main()
{
    int a='a';
    cout<<a<<endl;

    char ch = 98;
    cout<<ch<<endl;

    //char ch1 = 123456;
    //cout<<ch1<<endl;

    unsigned int b= -112;
    cout<<b<<endl;

    unsigned int c= -3;
    cout<<c<<endl;



    return 0;
}


/*

    output of this code is as last 64 no is stored in char and according to that ascii table value is given

 typecasting.cpp: In function 'int main()':
typecasting.cpp:12:16: warning: overflow in implicit constant conversion [-Woverflow]
     char ch1 = 123456;
                ^~~~~~
97
b
@

imp-

if we try to put some big no in the small no then it will put the some last no in the smaller one 

*/