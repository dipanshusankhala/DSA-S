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


};

void insertathead(Node* &head,int d)
{
    Node* temp=new Node(d);

    temp->next=head;
    head=temp;

}


void insertattail(Node* &tail,int d)
{
    Node* temp=new Node(d);

    tail->next =temp;
    tail=temp;



}

void insertatmiddle(int position,int d,Node* &head,Node* &tail)
{
    //if the we want to add the element at the begin
    if(position==1)
    {
        insertathead(head,d);
        return;
    }


    Node* temp=head;
    int count=1;
    while(count<position-1)
    {
        temp=temp->next;
        count++;
    }

    //if last position par insert karna ho toh
    if(temp->next==NULL)
    {
        insertattail(tail,d);
        return;
    }

    // insert wali position par pohoch gaye 

    // create a new node first

    Node* newnode=new Node(d);

    newnode->next=temp->next;

    temp->next=newnode;




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
    Node* node1=new Node(10);

    Node* head= node1;
    Node* tail=node1;

    print(head);

    insertattail(tail,20);

    print(head);

    insertattail(tail,30);

    print(head);

    //cout<<"head "<<head->data<<endl;
    //cout<<"tail "<<tail->data<<endl;

    insertatmiddle(3,25,head,tail);

    print(head);

    insertatmiddle(5,35,head,tail);
    
    print(head);

    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;


   

    


    






    


    
   

    return 0;
}





// sucessfully implemented