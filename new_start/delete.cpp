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




void insertatposition(Node* &head,int data,int position)
{
    int count=1;
    Node* temp=head;
    while(count<=position)
    {
        temp=temp->next;
        count++;
    }

    Node* newnode=new Node(data);
    newnode->next=temp->next;
    temp->next=newnode;
}

void deletenode(Node* &head,int position)
{
    if(position==1)
    {
        Node* temp=head;


        head=head->next;
        temp->next=NULL;

    }
    else
    {
        Node *pre = NULL;
        Node *curr = head;

        int count = 1;
        while (count <= position)
        {
            pre = curr;
            curr = curr->next;
            count++;
        }

        pre->next = curr->next;
        curr->next = NULL;
    }



}



int main()
{

    Node* temp=new Node(10);

    Node* head=temp;
    Node* tail=temp;

    insertathead(head,5);
    insertattail(tail,20);
    insertathead(head,3);
    insertattail(tail,25);
    
    insertattail(tail,30);

    insertatposition(head,15,3);
    printlist(head);

    deletenode(head,1);
    printlist(head);
    


    return 0;
}