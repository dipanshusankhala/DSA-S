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
        this->next=NULL;
        //cout<<"Node is ceated sucessfully"<<endl;
    }

};


void insertathead(Node* &head,int d)
{
    Node* temp=new Node(d);

    temp->next=head;

    head=temp;

    
}


void print(Node* &head)
{
    Node* temp=head;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";

        temp=temp->next;

    }

    cout<<endl;
    

}




int main()
{

    //Node node1(10);

    //cout<<"Data of the node 1 "<<node1.data<<endl;

    //Node* node1=new Node(10);

    //cout<<"data is "<<node1->data<<endl;


// createing a new node

    Node* node1=new Node(10);

    //cout<<node1->data<<endl;
    //cout<<node1->next<<endl;


    // head pointed to the node1
    // isi main fasa tha main ki ye declare kyu nahi karte head but baadme kiya 
    // so every time before you use the head it has to be declared manually
    // head shows the first node of the linked list

    Node* head=node1;

    // printing before

    cout<<"Before adding new node"<<endl;

    print(head);

    // create a new node at the begining

    insertathead(head,20);







    cout<<"After adding new node"<<endl;

    print(head);











    




    return 0;
}