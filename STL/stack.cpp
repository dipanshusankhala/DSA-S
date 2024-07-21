#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<string> S;

    S.push("Dipanshu");
    S.push("Savari");
    S.push("preeti");
    S.push("Mitali");

    cout<<"Top element : "<<S.top()<<endl; //Top element : Mitali

    S.pop(); // jo last main daala wo nikal jaayega

    cout<<"Top element : "<<S.top()<<endl; // Top element : preeti

    cout<<"Size of stack "<<S.size()<<endl; //Size of stack 3

    cout<<"Empty or not "<<S.empty()<<endl;  // Empty or not 0




    return 0;
}