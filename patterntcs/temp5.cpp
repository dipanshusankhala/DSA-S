#include<iostream>
using namespace std;

int main()
{


    int n;
    cin>>n;

    cout<<endl;

    for(int i=n;i>=1;i--)
    {
        for(int j=n;j>=1;j--)
        {
            if(j>=n-i)
            {
                cout<<"*"<<" ";
            }
            else
            {
                cout<<" ";
            }

        }

        cout<<endl;
    }





    return 0;
}