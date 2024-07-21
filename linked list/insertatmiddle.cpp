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


void inserttail(Node* &tail,int d)
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


void insertatmiddle(Node* &tail,Node* &head,int position,int d)
{

    // pehele run kare toh output
    /*

    10
    10 20
    10 20 30
    10 25 20 30
    
    
    */

    // agar 1st position par daalna ho

    if(position==1)
    {
        insertathead(head,d);
        return;
    }


    // after this 

    /*
        10 
        10 20
        10 20 30
        25 10 20 30

    
    
    
    */






    Node* temp=head;

    int count=1;

    // us position tak pohoch jaayenge 

    while(count<position-1)
    {
        temp=temp->next;
        count++;
    }

    // inserting at end

    if(temp->next==NULL)
    {
        inserttail(tail,d);
    }

    // creating a new node

    Node* newnode=new Node(d);

    // inserting at its position

    newnode->next=temp->next;
    temp->next=newnode;
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


    Node* node1=new Node(10);

    Node* head=node1;

    Node* tail=node1;

    print(head);

    inserttail(tail,20);

    print(head);

    inserttail(tail,30);

    print(head);

    //insertatmiddle(head,4,25);

    print(head);


    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;


    /*
    
    ek pyaari si galti humne last position par daal to diya par tail ko pure function main update kiya hi nahi 
    isiliye tail pointer abhi bhi 30 par hi hai but last element to 25 hai phir bhi 
    

    10 
    10 20
    10 20 30
    10 20 30 25
    head 10
    tail 30
    
    
    
    */


   insertatmiddle(tail,head,4,25);
   

    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;



    /*
    
    
    
    
    10 
    10 20
    10 20 30
    10 20 30 25
    head 10
    tail 30
    head 10
    tail 25
    
    
    
    
    */








































    return 0;





}




/*




10       
10 20    
10 20 30 
10 20 25 30









*/