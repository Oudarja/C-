#include<iostream>
using namespace std;
class base
{
    int x;
public:
    void setx(int n)
    {
        x=n;
    }
    void show()
    {
        cout<<x<<"\n";
    }
};
class derived:private base
{
    int y;
public:
    void setxy(int n,int m)
    {
        setx(n);
        y=m;
    }
    void showxy()
    {
        show();
        cout<<y;
    }
};
int main()
{
    derived ob1;
ob1.setxy(11,12);
ob1.showxy();
return 0;
}
