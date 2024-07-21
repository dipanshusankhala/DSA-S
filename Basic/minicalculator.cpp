#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the value of the first number: "<<endl;
    cin>>a;
    cout<<"Enter the value of the Second number: "<<endl;
    cin>>b;

    char op ;
    cout<<"Enter the operation you want to perform :  "<<endl;
    cin>>op;

   switch(op)
   {

        case '+': cout<<a+b<<endl;
            break;

        case '-': cout<<a-b<<endl;
            break;

        case '*': cout<<a*b<<endl;
            break;

        case '/': cout<<a/b<<endl;
            break;

        case '%': cout<<a%b<<endl;
            break;

        default : cout<<"Enter Valid Operation !!"<<endl;
        







   }


   return 0;
}




/*

Enter the value of the first number:
12
Enter the value of the Second number: 
23
Enter the operation you want to perform :  
+
35


*/