#include<bits/stdc++.h>
using namespace std;

struct Employee
{
    //struct members
    int id;
    char name[10];
    float salary;
};



int main()
{
    struct Employee emp={101,"Ajay",500000};

    //accessing the member of the struct 

    cout<<"Size of the struct : "<<sizeof(emp)<<endl;  // size always 4 chya multiple asta if nasel tar padding karun add karachya

    cout<<"ID - "<<emp.id<<endl;

    cout<<"name - "<<emp.name<<endl;

    cout<<"salary - "<<emp.salary<<endl;


    return 0;
}


/*


//memory allocation function
























*/


//memory allocation function
