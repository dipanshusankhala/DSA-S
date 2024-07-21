#include<bits/stdc++.h>
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
    }

};


void insertathead(Node* &head , int data)
{
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
}

void print(Node* head)
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
    Node* newnode=new Node(10);

    Node* head=newnode;

    print(head);

    insertathead(head,20);

    print(head);

    insertathead(head,30);
    print(head);

    return 0;
}