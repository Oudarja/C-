#include<iostream>
using namespace std;
int main()
{
    int *p;
    p=new int;
    if(!p)
    {
        cout<<"Allocation error\n";
        return 1;
    }
    *p=1000;
    cout<<"Here is an integer at p"<<*p<<"\n";
    delete p;
    return 0;
}

