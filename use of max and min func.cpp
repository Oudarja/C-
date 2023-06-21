#include<iostream>
using namespace std;
int main()
{
    int a,t=0,p=10^18;
    while(cin>>a)
    {
        t=max(t,a);
        p=min(p,a);
    }
    cout<<t<<"\n"<<p;
    return 0;
}
