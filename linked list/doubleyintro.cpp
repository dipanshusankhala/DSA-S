#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* previous;
    Node* next;

    // constructor

    Node(int data)
    {
        this->data=data;
        this->previous=NULL;
        this->next=NULL;
    }

};


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


int getlength(Node* head)
{
    Node* temp=head;
    int length=0;

    while(temp!=NULL)
    {
        length++;
        temp=temp->next;
    }

    return length;
}


void insertathead(Node* &head,int data)
{
    Node* temp=new Node(data);

    temp->next=head;
    head->previous=temp;
    head=temp;
}


void insertattail(Node* &tail,int data)
{
    Node* temp=new Node(data);

    tail->next=temp;
    temp->previous=tail;
    tail=temp;
}

int main()
{


    Node* node1=new Node(10);
    Node* head= node1;

    print(head);

    cout<<getlength(head)<<endl;

    insertathead(head,5);

    print(head);

    cout<<getlength(head)<<endl;









    return 0;
}