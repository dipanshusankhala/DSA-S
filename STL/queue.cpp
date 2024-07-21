#include<iostream>
#include<queue>

using namespace std;

int main()
{
    queue<string> q;
    q.push("Dipanshu");;
    q.push("Savri");
    q.push("Preeti");

    cout<<"First Element "<<q.front()<<endl;

    q.pop();

    cout<<"First Element after pop "<<q.front()<<endl;

    //q.size()

    return 0;



}



/*

First Element Dipanshu
First Element after pop Savri

*/