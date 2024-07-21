#include<iostream>
using namespace std;

int main()
{

    char ch='a';
    char *ptr=&ch;

    (*ptr)++;

    cout<<ch<<endl;





    return 0;
}