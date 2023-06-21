#include<iostream>
using namespace std;
void f(int a)
{
    if(a==1)
        return;
        f(a-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<f(n);
    return 0;
}
