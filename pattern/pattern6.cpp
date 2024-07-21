/*

print the following pattern

    *
   * *
  * * *
 * * * *
* * * * *
 * * * *
  * * *
   * * 
    *
*/


#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    for(int row=1;row<=n;row++)
    {


        for(int space =0; space<n-row; space++)
        {
            cout<<"  ";

        }

        for(int col=row;col>=1;col--)
        {
            cout<<col<<" ";
        }

        for(int col=2;col<=row;col++)
        {
            cout<<col<<" ";
        }


        cout<<endl;
    }
    return 0;
}



/*

output


Enter the value of n : 5
        1 
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5


*/