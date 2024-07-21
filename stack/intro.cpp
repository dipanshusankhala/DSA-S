#include<bits/stdc++.h>
using namespace std;

class Stack
{
    public:
    int *arr;
    int size;
    int top;

    Stack(int size)
    {
        this->size=size;
        arr=new int[size];
        top=-1;
    }

    void push(int element)
    {
        if(top<size)
        {
            top++;
            arr[top]=element;
        }
        else
        {
            cout<<"Stack Overflow"<<endl;
        }
    }

    void pop()
    {
        if(top>=0)
        {
            top--;
        }
        else
        {
            cout<<"Stack underflow"<<endl;
        }
    }

    int top1()
    {
        if(top>=0)
        {
            return arr[top];
        }
        else
        {
            cout<<"stack is emoty"<<endl;
            return -1;
        }   
    }

    bool isempty()
    {
        if(top==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }



};

int main()
{
    Stack st(10);

    st.push(15);
    st.push(22);
    st.push(45);
    cout<<st.top1()<<endl;
    st.pop();
    cout<<st.top1()<<endl;
    st.pop();
    cout<<st.top1()<<endl;
    st.pop();

    cout<<st.isempty()<<endl;





    return 0;
}