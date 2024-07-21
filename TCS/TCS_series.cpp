#include<bits/stdc++.h>
using namespace std;

int main()
{
    int even=1;
    int odd=1;

    cout<<even<<" ";
    cout<<odd<<" ";

    for(int i=3;i<20;i++)
    {
        if(i&1)
        {
            odd=odd*2;

            cout<<odd<<" ";
            
        }
        else
        {
            even=even*3;

            cout<<even<<" ";

        }


    }

    return 0;
}