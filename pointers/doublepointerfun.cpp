#include<iostream>
using namespace std;

void update(int **p2)
{
    
    //p2=p2+1;
    
    //kuch change hoga ? 

    /*

    Before i 5        
    Before p 0x61ff08 
    Before p2 0x61ff04
    After i 5
    After p 0x61ff08  
    After p2 0x61ff04 

    change nahi hua 
    
    */

    *p2=*p2+1;
    
    //kuch change hoga ?
    /*
    
    Before i 5        
    Before p 0x61ff08 
    Before p2 0x61ff04
    After i 5
    After p 0x61ff0c  
    After p2 0x61ff04 
    
    */ 

    **p2=**p2+1;

    //kuch change hoga ?
}

int main()
{
    int i=5;
    int *p=&i;
    int **p2 = &p;

    cout<<endl;
    cout<<"Before i "<<i<<endl;
    cout<<"Before p "<<p<<endl;
    cout<<"Before p2 "<<p2<<endl;
    update(p2);
    cout<<"After i "<<i<<endl;
    cout<<"After p "<<p<<endl;
    cout<<"After p2 "<<p2<<endl;



 




    return 0; 


}