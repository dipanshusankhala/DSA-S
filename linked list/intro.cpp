#include<iostream>
using namespace std;


class Node
{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        
        this->data=data;
        this->next=NULL;   //0 

    }

};

int main()
{

    // static memory allocation
    /*Node node1;

    cout<<node1.next<<endl;

    cout<<node1.data<<endl;

    node1.data=100;


    cout<<node1.next<<endl;

    cout<<node1.data<<endl;

    */

   // Dynamic allocation 



   Node* node1=new Node(50);

   cout<<node1->data<<endl;     // 50

   cout<<node1->next<<endl;     // 0x7600c0





    return 0;
}