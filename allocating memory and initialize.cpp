#include<iostream>
using namespace std;
int main()
{
    int *p;
    p=new int(1000);
    if(!p)
    {
        cout<<"Allocation error\n";
        return(1);
    }
    cout<<*p;
    delete p;
    return 0;
}
