#include<bits/stdc++.h>
using namespace std;

int main()
{

    pair<int,int>p={1,3};

    cout<<p.first<<" "<<p.second<<endl;

    pair<int,pair<int,int>>p1={2,{4,5}};

    cout<<p1.first<<" ";
    cout<<p1.second.first<<" "<<p1.second.second<<endl;


    pair<int,int> arr[]={{1,2},{3,4},{5,6}};

    cout<<arr[1].first<<" "<<arr[1].second;





    return 0;
}
    