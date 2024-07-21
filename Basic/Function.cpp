#include<iostream>
using namespace std;


int power(int num1, int num2)
 // here we are passing the argument with the datatype which have different name than the main functions . in main function we are giving the a and b and in power function we are passing the num 1 and num 2 varibale still its work 
{
    int ans=1;
    for(int i=1;i<=num2;i++)
    {
        ans=ans *num1;
    }

    return ans;
}

int main()
{
    int a,b;
    cin>>a>>b;

    int answer = power(a,b);

    cout<<"The answer is "<<answer;
    return 0;
}



//2 3
// The answer is 8