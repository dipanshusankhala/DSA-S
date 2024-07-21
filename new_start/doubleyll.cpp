#include<bits/stdc++.h>
using namespace std;


class Node
{
    public:
    int data;
    Node* pre;
    Node* next;

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
        this->pre=NULL;
    }
};

void printlist(Node* &head)
{
    Node* temp=head;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    cout<<endl;
}

void insertathead(Node* &head,int data)
{
    Node* newnode=new Node(data);


    newnode->next=head;
    head->pre=newnode;
    head=newnode;
}

void insertattail(Node* &tail,int data)
{
    Node* newnode=new Node(data);
    tail->next=newnode;
    newnode->pre=tail;
    tail=newnode;

}

void insertatposition(Node* &head,int position,int data)
{
    Node* temp=head;
    int count=1;

    while(count<position)
    {
        count++;
        temp=temp->next;
    }

    Node* newnode=new Node(data);

    newnode->next=temp->next;
    temp->next->pre=newnode;
    temp->next=newnode;
    newnode->pre=temp;
}


void deleteathead(Node* &head,int position)
{

    
    if(position==1)
    {

        Node* temp=head;
        temp->next->pre=NULL;
        head=head->next;
        temp->next=NULL;
        

    }
    else
    {
        Node* prev=NULL;
        Node* curr=head;

        int count=1;
        while(count<position)
        {
            prev=curr;
            curr=curr->next;
            count++;
        }

        curr->pre=NULL;
        prev->next=curr->next;
        curr->next=NULL;
    }
    
}


int main()
{

    Node* newnode=new Node(10);
    Node* head=newnode;
    Node* tail=newnode;


    printlist(head);

    insertathead(head,5);

    printlist(head);

    insertattail(tail,20);

    printlist(head);

    insertatposition(head,2,15);

    printlist(head);

    deleteathead(head,1);

    printlist(head);

    deleteathead(head,2);

    printlist(head);





    return 0;
}







/*

10 
5 10
5 10 20
5 10 15 20
10 15 20
10 20



*/