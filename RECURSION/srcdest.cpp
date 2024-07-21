#include<iostream>
using namespace std;

void Reachhome(int src,int dest)
{

    cout<<"source -  "<<src<<" Destination -  "<<dest<<endl;
    // base case 

    if(src==dest)
    {
        cout<<"Pohochlo re me !!!!! "<<endl;

        return;
    }

    // processing part 
    //src++  har baar ek ek step aage lenge na so src++

    return Reachhome(src+1,dest);
}

int main()
{
    int src=1;
    int dest=10;

    Reachhome(src,dest);
    return 0;
}


/*






source -  1 Destination -  10
source -  2 Destination -  10
source -  3 Destination -  10
source -  4 Destination -  10
source -  5 Destination -  10
source -  6 Destination -  10
source -  7 Destination -  10
source -  8 Destination -  10
source -  9 Destination -  10
source -  10 Destination -  10
Pohochlo re me !!!!!











*/