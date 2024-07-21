/*

print the following pattern

*
* *
* * *
* * * *


*/


#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    for(int row=0;row<n;row++)
    {
        for(int col=0;col<=row;col++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }

    return 0;

}





/*

output- 

Enter the number : 4
* 
* *
* * *
* * * *


*/