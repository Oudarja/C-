#include<iostream>
using namespace std ;
int add(int x,int y=20);
int main()
{
    int a,b,result=0;
    cin>>a>>b;
    result=add(a,b);
    cout<<"result="<<result<<"\n";
    result=add(a);
    cout<<"result="<<result;
    return 0;
}
int add(int x,int y)
{
    return x+y;
}
