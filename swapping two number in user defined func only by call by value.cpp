#include<iostream>
using namespace std;
void swap_(int x,int y);
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"Before swap a is:"<<a<<"and b is:"<<b<<"\n";
    swap_(a,b);
    return 0;
}
void swap_(int x,int y)
{
    int temp=0;
    temp=x;
    x=y;
    y=temp;
    cout<<"After swap a is:"<<x<<"and b is:"<<y<<"\n";
}

