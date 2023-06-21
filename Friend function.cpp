#include<bits/stdc++.h>
using namespace std;
class A
{
    int prva1;
public:
    A()
    {
        prva1=0;
    }
    void Getprva1(int x)
    {
        prva1=x;
    }
     friend class B;
};

class B
{
    int prvb1;
public:
    B()
    {
        prvb1=0;
    }
    void Getprvb1(A &a)
    {
        prvb1=a.prva1+25;
        a.prva1=50;
    }
    void showprvb1(A a)
    {
      cout  <<"\n Value of PrvA1="<<a.prva1<<'\n';
      cout<<"\nValue of PrvB1="<<prvb1<<'\n';
    }
};

int main()
{

    A a1; B b1;
    a1.Getprva1(30);
    b1.Getprvb1(a1);
    b1.showprvb1(a1);
return 0;
}

