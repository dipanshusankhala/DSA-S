#include<iostream>
#include<deque>

using namespace std;

int main()
{
    deque<int> a;
    a.push_back(1); // adding 1 from back
    a.push_front(2); // adding 2 from front 
    a.push_front(3);
    a.push_front(4);



    for(int i=0;i<a.size();i++)  // 2 1 
    {
        cout<<a[i]<<" ";
    }
 
    cout<<endl;

    a.pop_back(); // delete from back

    // a.pop_front()  delete from front 

    for(int i=0;i<a.size();i++)  // 2 1 
    {
        cout<<a[i]<<" ";
    }

    cout<<"print first index element"<<a.at(1)<<endl;

    //d.front()
    //d.back()

    //d.empty()
    cout<<endl;

    a.erase(a.begin(),a.begin()+1) ;// we have to pass an range from which elemet we have to delete and till when 


    for(int i=0;i<a.size();i++)  // 2 1 
    {
        cout<<a[i]<<" ";
    }


    return 0;
}