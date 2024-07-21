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


void insertatposition(Node* &tail,int element,int data)
{
    //empty list hai 
    if(tail==NULL)
    {
        Node* newnode=new Node(data);
        newnode->next=newnode;
        tail=newnode;
    }
    else
    {
        Node* curr=tail;
        while(curr->data!=element)
        {
            curr=curr->next;
        }

        Node* newnode=new Node(data);
        newnode->next=curr->next;
        curr->next=newnode;

    }
}




void deletenode(Node* &tail,int value)
{
    if(tail==NULL)
    {
        cout<<"list is empty"<<endl;

    }
    else
    {
        //list is non empty

        Node* pre=tail;
        Node* curr=pre->next;

        while(curr->data!=value)
        {
            pre=curr;
            curr=curr->next;
        }

        pre->next=curr->next;



        //1 node ka case
        if(curr==pre)
        {
            tail=NULL;
        } 

        //  >=2 node ka case
        else if(tail==curr)
        {
            tail=pre;
        }
        
        curr->next=NULL;

    
    }
}



void printlist(Node* tail)
{



    if(tail==NULL)
    {
        cout<<"list is empty"<<endl;
    }
    Node* temp=tail;

    do
    {
        cout<<tail->data<<" ";
        tail=tail->next;

    } while (tail!=temp);
    

    cout<<endl;
}

int main()
{


    Node* tail=NULL;

    insertatposition(tail,5,3);

    printlist(tail);

  /*  
    insertatposition(tail,3,5);

    printlist(tail);

    insertatposition(tail,3,4);

    printlist(tail);

    insertatposition(tail,5,7);

    printlist(tail);

    insertatposition(tail,5,6);

    printlist(tail);

    /*

    3
    3 5
    3 4 5
    3 4 5 7
    3 4 5 6 7

    


   deletenode(tail,3);
   printlist(tail);

   deletenode(tail,7);
   printlist(tail);



*/
   /*
   3 
3 5
3 4 5
3 4 5 7
3 4 5 6 7
7 4 5 6
6 4 5 
*/



    deletenode(tail,3);

    printlist(tail);


    return 0;
}