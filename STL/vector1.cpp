#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v1;
    v1.push_back(5);
    v1.emplace_back(10);
    v1.push_back(15);
    v1.push_back(20);
    v1.push_back(25);
    v1.push_back(30);


    vector<int>v2(5,100);

    vector<int>v3(10);

    vector<pair<int,int>>v4;
    v4.push_back({1,2});

    for(int i=0;i<v3.size();i++)
    {
        cout<<v3[i]<<" ";
    }
    cout<<endl;

    // through iterator

    vector<int>::iterator it=v1.begin();

    cout<<*(it)<<endl;  // 5

    it++;
    cout<<*(it)<<endl;  //10

    // same work as a pointer arr

    for(vector<int>::iterator it=v1.begin(); it!=v1.end();it++)
    {
        cout<<*(it)<<" ";   //5 10 15 20 25 30 
    }

    cout<<endl;


    cout<<v1.back()<<endl;

    vector<int> ans;

    ans.push_back(1);
    ans.push_back(2);
    ans.push_back(3);
    ans.push_back(4);
    ans.push_back(5);
    ans.push_back(6);

    for(auto it=ans.begin();it!=ans.end();it++)
    {
        cout<<*(it)<<" "; // 1,2,3,4,5,6
    }
    cout<<endl;

    for(auto i:ans)
    {
        cout<<i<<" ";  //1 2 3 4 5 6
    }

    cout<<endl;



    int arr[5]={10,20,30,40,50};

    for(auto i:arr)
    {
        cout<<i<<" "; //10 20 30 40 50
    }

    cout<<endl;


    //1 2 3 4 5 6
    ans.erase(ans.begin()+1);

    for(auto i:ans)
    {
        cout<<i<<" ";  //1 3 4 5 6
    }

    ans.erase(ans.begin()+1,ans.begin()+3);

    cout<<endl;

    for(auto i:ans)
    {
        cout<<i<<" "; //1 5 6  starting index included ending index not included
    }

    cout<<endl;


    // insert function

    vector<int>kuchbhi;
    kuchbhi.push_back(10);
    kuchbhi.push_back(20);
    kuchbhi.push_back(30);
    kuchbhi.push_back(40);

    for(auto i:kuchbhi)
    {
        cout<<i<<" ";  //10 20 30 40    
    }

    cout<<endl;

    kuchbhi.insert(kuchbhi.begin(),5);

    for(auto i:kuchbhi)
    {
        cout<<i<<" ";  //5 10 20 30 40
    }

    cout<<endl;

    kuchbhi.insert(kuchbhi.begin()+2,15);

    
    for(auto i:kuchbhi)
    {
        cout<<i<<" ";  //5 10 15 20 30 40 
    }

    cout<<endl;

    kuchbhi.insert(kuchbhi.begin()+4,2,25);

    for(auto i:kuchbhi)
    {
        cout<<i<<" ";  //5 10 15 20 25 25 30 40
    }

    cout<<endl;


    




















    cout<<endl;
    return 0;
}