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
    }

    //destructor

    ~Node()
    {
        int value =this->data;

        // memory ko free karane ka code jo ki competative main nahi puchte

        if(this->next!=NULL)
        {
            delete next;
            this->next=NULL;
        }

        cout<<"memory is free for the node with the data "<<value<<endl;

    }

};


void deletion(int position,Node* &head)
{
    if(position==1)
    {
        // Deleting the first node

        Node* temp=head;

        // head ko uske agle wale memory par point kara diya

        head=head->next;

        //  purane head ko memory free karana hai toh usko temp main store kar liya
        temp->next=NULL;
        delete temp;

    }

    else
    {
        Node* current=head;
        Node* previous=NULL;
        int count=1;

        while(count< position)
        {
            previous=current;
            current=current->next;
            count++;

        }

        //deleting actual node

        previous->next=current->next;

        current->next=NULL;

        delete current;




    }
}


void insertattail(Node* &tail,int d)
{
    Node* temp=new Node(d);

    tail->next=temp;
    tail=temp;

}


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

void insertatmiddle(int position ,int d,Node* &head,Node* &tail)
{
    if(position==1)
    {
        insertathead(head,d);
        return;
    }


    Node* temp=head;
    int count=1;

    while(count<position)
    {
        temp=temp->next;
        count++;
    }

    if(temp->next==NULL)
    {
        insertattail(tail,d);
        return;
    }

    Node* newnode=new Node(d);
    newnode->next=temp->next;
    temp->next=newnode;
}


int main()
{
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;

    //cout<<node1->data<<endl;
    //cout<<node1->next<<endl;

    insertattail(tail,20);
    print(head);
    insertathead(head,5);
    print(head);
    insertattail(tail,30);
    print(head);

    insertatmiddle(3,25,head,tail);
    print(head);

    insertatmiddle(5,35,head,tail);

    print(head);

    //cout<<head->data<<endl;
    //cout<<tail->data<<endl;

    deletion(1,head);

    print(head);



    // giving error

    




    

    return 0;
}