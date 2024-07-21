#include<iostream>
using namespace std;

void reverse(string& name,int start,int end)
{
    // base case
    if(start>end)
    {
        return;
    }

    // processing 
    swap(name[start],name[end]);
    start++;
    end--;

    // recursive call 

    reverse(name,start,end);
}

int main()
{

    string name ="Dipanshu";
    int start=0;
    int end=name.length();


    cout<<name<<endl;

    reverse(name,start,end);

    cout<<name<<endl;







    return 0;

}