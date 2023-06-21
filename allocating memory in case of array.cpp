#include<iostream>
using namespace std;
int main()
{
    int *p,i;
    p=new int [10];
    for(i=0;i<10;i++)
    {
        cin>>p[i];
    }
    for(i=0;i<10;i++)
    {
        cout<<p;
        p++;
    }
    for(i=0;i<10;i++)
        cout<<p[i]<<"\n";
    return 0;
}
