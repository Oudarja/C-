#include<iostream>
using namespace std;
class base
{
protected:
    int a,b;
public:
    base(int n,int m)
    {
        a=n;
        b=m;
    }
    void setab(int n,int m)
    {
        a=n;
        b=m;
    }
    void showab()
    {
        cout<<a;
        cout<<" "<<b<<"\n";
    }
};
int main()
{
    base ob(20,10);
    ob.showab();
    ob.setab(30,40);
    ob.showab();
    return 0;
}


