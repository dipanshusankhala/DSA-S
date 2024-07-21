#include<bits/stdc++.h>
using namespace std;

int main()
{
    int price=345667;
    int original=1;
    while(price>0)
    {
        int digit=price%10;
        original=original*digit;
        price=price/10;
    }
    cout<<original<<endl;
    return 0;
}