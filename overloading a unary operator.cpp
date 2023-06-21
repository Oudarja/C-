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
    coord operator++();
    coord operator--();
};
coord  coord::operator++()
{
    x++;
    y++;
}
coord coord::operator--()
{
    x--;
    y--;
}
int main()
{
    coord o1(1,2);
    int x,y;
    ++o1;
    o1.get_xy(x,y);
    cout<<"(++o1)X:"<<x<<"(++o1)Y"<<y<<"\n";
    --o1;
    o1.get_xy(x,y);
    cout<<"(--o1)X:"<<x<<"(--o1)Y"<<y<<"\n";
    return 0;
}
