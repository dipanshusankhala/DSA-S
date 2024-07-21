#include<iostream>
using namespace std;


bool checkpalindrome(char name[],int n)
{
    int start=0;
    int end=n-1;

    while(start<=end)
    {
        if(name[start]!= name[end])
        {
            return 0;
        }

        else{
            start++;
            end--;
        }

    }

    return 1;
}

void reverse(char name[],int n)
{
    int start=0;
    int end=n-1;

    while(start<end)
    {
        swap(name[start],name[end]);
        start++;
        end--;
    }
}


int getlength(char name[])
{
    int count=0;
    for(int i=0; name[i]!='\0';i++)
    {
        count++;
    }

    return count;
}

int main()
{

    char name[20];

    cout<<"Enter your name "<<endl;
    cin>>name;

    

    cout<<"Your name is "<<name<<endl;

    int length=getlength(name);

    cout<<"length of the name "<<length<<endl;

    //reverse(name,length);

    cout<<"Reverse string is "<<name<<endl;


    cout<<"Palindrome or not "<<checkpalindrome(name,length);





    return 0;
}