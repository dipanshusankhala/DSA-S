
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    
    int original = n;
    n=2*n;
    for(int row=0;row<=n;row++)
    {
        for(int col=0;col<=n;col++)
        {
            int ateveryindex=original- min({row,col,n-row,n-col});
            cout<<ateveryindex<<" ";

        }

        cout<<endl;
    }
}



/* 

output

Enter the value of n : 5

5 5 5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 4 4 5
5 4 3 3 3 3 3 3 3 4 5 
5 4 3 2 2 2 2 2 3 4 5
5 4 3 2 1 1 1 2 3 4 5
5 4 3 2 1 0 1 2 3 4 5
5 4 3 2 1 1 1 2 3 4 5 
5 4 3 2 2 2 2 2 3 4 5
5 4 3 3 3 3 3 3 3 4 5
5 4 4 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5 5 5

if we want to remove center zero then n=2*n-2;





*/