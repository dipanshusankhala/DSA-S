#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* previous;
    Node* next;

    Node(int d)
    {
        this->data=d;
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


void insertattail(Node* &tail,int d)
{
    Node* temp=new Node(d);


    temp->previous=tail;
    tail->next=temp;
    tail=temp;

}


void insertathead(Node* &head,int d)
{
    Node* temp=new Node(d);
    temp->next=head;
    head->previous=temp;
    head=temp;
}

void insertatmiddle(int position,Node* &head,Node* &tail, int data)
{
    if(position==1)
    {
        insertathead(head,data);
        return;
    }
    int count=1;


    Node* temp=head;
    while (count<position)
    {
        temp=temp->next;
        count++;
        
    }

    if(temp->next==NULL)
    {
        insertattail(tail,data);
        return ;
    }

    Node* newnode=new Node(data);

    newnode->next=temp->next;
    newnode->previous=temp;
    temp->next=newnode;
    temp->next->previous=newnode;



    
}

int main()
{

    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;

    //cout<<node1->data<<endl;

    //cout<<node1->next<<endl;
    //cout<<node1->previous<<endl;

    print(head);

    insertathead(head,20);

    print(head);
    insertattail(tail,30);
    print(head);

    insertatmiddle(2,head,tail,25);
    print(head);



    








    return 0;
}