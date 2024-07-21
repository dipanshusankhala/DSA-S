// get bits





#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=5;

    int count=0;

    while(count!=3)
    {
        n=n>>1;
        count++;
    }

    if(n&1)
    {
        cout<<"1 is present"<<endl;

    }
    else
    {
        cout<<"0 is present"<<endl;
    }























    /*
    int bit=1<<3;


    if(bit&n)
    {
        cout<<"1 is present"<<endl;
    }
    else
    {
        cout<<"0 is present"<<endl;
    }


    */

    return 0;
}