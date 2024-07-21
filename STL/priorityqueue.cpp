#include<iostream>
#include<queue>

using namespace std;

int main()
{
    // max heap fetch karte time sabse pehele maximum value bahar niklega
    //default max heap hi hota hai 

    priority_queue<int> maxi;

    // min heap

    priority_queue<int,vector<int>,greater<int> > mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    cout<<"Size "<<maxi.size()<<endl;
    

    int n= maxi.size();

    for(int i=0;i<n;i++)
    {
        cout<<"Top element "<<maxi.top()<<endl;
        maxi.pop();
    }

    cout<<endl;

    return 0;


}



/*

Size 4
Top element 3
Top element 2
Top element 1
Top element 0

*/