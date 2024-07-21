/*

print the following pattern

1 
1 2
1 2 3 
1 2 3 4
1 2 3 4 5 


note - here the relationship between the rows and the coloumns are equal

hence col=rows
and we print the column number 


*/


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number : ";
    cin>>n;

    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=row;col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }

    return 0;
}

/*

output-

enter the number : 5
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5




*/