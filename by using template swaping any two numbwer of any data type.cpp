#include<iostream>
using namespace std;
template<class x,class y>void swap_(x&a,y&b)
{
    x temp1;
    y temp2;
    temp1=a;
    temp2=b;
    b=temp1;
    temp1=temp2;
    a=temp1;
}
int main()
{
    int i=10,j=20;
    float x=10.1,y=23.3;
    float w=10.89;int q=2;
    cout<<"Original i,j:"<<i<<" "<<j<<"\n";
    cout<<"Original x,y:"<<x<<" "<<y<<"\n";
    cout<<"Original w,q:"<<w<<" "<<q<<"\n";
    swap_(i,j);
    swap_(x,y);
    swap_(w,q);
    cout<<i<<" "<<j<<"\n";
 cout<<x<<" "<<y<<"\n";
  cout<<w<<" "<<q<<"\n";
    return 0;
}

