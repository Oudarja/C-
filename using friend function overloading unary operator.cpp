#include<iostream>
using namespace std;
class coord
{
    int x,y;
public:
    coord()
    {
        x=0;
        y=0;
    }
    coord(int i,int j)
    {
        x=i;
        y=j;
    }
    void get_xy(int &i,int &j)
    {
        i=x;
        j=y;
    }
    friend coord operator++(coord &o1);
    friend coord operator++(coord &o1,int notused);
};
coord operator++(coord &o1)
{
    o1.x++;
    o1.y++;
    return o1;
}
coord operator++(coord &o1,int notused)
{
    o1.x++;
    o1.y++;
    return o1;
}
int main()
{
    int x,y;
    coord o1(10,2);
    o1++;
    o1.get_xy(x,y);
    cout<<x<<" "<<y<<"\n";
    ++o1;
   o1.get_xy(x,y);
    cout<<x<<" "<<y;
    return 0;
}
