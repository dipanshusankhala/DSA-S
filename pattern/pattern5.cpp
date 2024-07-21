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

    for(int row=0;row<2*n;row++)
    {
        int totalcol= row>n ? 2*n-row : row;

        int space=n-totalcol;
        for(int s=0; s<space;s++)
        {
            cout<<" ";
        }

        for (int col=0; col<totalcol;col++)
        {
            cout<<"* ";
        }

        cout<<endl;
        
    }

    return 0;
}


/*

output

Enter the value of n : 5

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