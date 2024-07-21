#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:

    Node* next;
    int data;

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }

};

void insertathead(Node* &head,int data)
{
    Node* newnode=new Node(data);
    newnode->next=head;
    head=newnode;

}

void insertattail(Node* &tail,int data)
{
    Node* newnode=new Node(data);
    tail->next=newnode;
    tail=newnode;
}

void insertatposition(Node* &head,int data,int position)
{
    int count=1;
    Node* temp=head;
    while(count<position)
    {
        temp=temp->next;
        count++;
    }

    Node* newnode=new Node(data); 
    
    newnode->next=temp->next;
    temp->next=newnode;
}

void printlist(Node* &head)
{
    Node* temp=head;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main()
{

    Node* temp=new Node(20);
    Node* head=temp;
    Node* tail=temp;

    insertathead(head,10);
    insertattail(tail,30);
    insertathead(head,5);
    insertattail(tail,40);
    insertatposition(head,15,3);

    printlist(head);




    //cout<<temp->data<<endl;

    




    return 0;
}