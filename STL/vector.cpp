#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v;


    vector<int> a(5,1);  // output 11111 vector size of 5 with initilization if 1

     for(int i=0;i<a.size();i++)
    {
        cout<<a[i];
    }

    vector<int> last(a); // it will copy all the element to the last vector


    cout<<"Capacity "<<v.capacity()<<endl; // 0

    v.push_back(1);
    cout<<"Capacity "<<v.capacity()<<endl;  // 1

    v.push_back(2);
    cout<<"Capacity "<<v.capacity()<<endl;  // 2

    v.push_back(3);
    cout<<"Capacity "<<v.capacity()<<endl;  // 4

    v.push_back(4);
    cout<<"Capacity "<<v.capacity()<<endl;  // 4

    v.push_back(5);
    cout<<"Capacity "<<v.capacity()<<endl;  // 8

    cout<<"size "<<v.size()<<endl; //5

    cout<<"elemet at 2nd index "<<v.at(2)<<endl;  //3

    cout<<"front "<<v.front()<<endl; // 1
    cout<<"back "<<v.back()<<endl;  //  5

    v.pop_back(); //  5 is removed

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
    }


















    return 0;
}


/*


11111Capacity 0
Capacity 1
Capacity 2
Capacity 4
Capacity 4
Capacity 8
size 5
elemet at 2nd index 3
front 1
back 5
1234





*/