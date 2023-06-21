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
    friend coord operator+(coord o1,int i);
    friend coord operator+(int i,coord o2);
};
 coord operator+(coord o1,int i)
{
    coord temp;
    temp.x=o1.x+i;
    temp.y=o1.y+i;
    return temp;
}
coord operator+(int i,coord o2)
{
    coord temp;
    temp.x=o2.x+i;
    temp.y=o2.y+i;
    return temp;
}
int main()
{
    int x,y;
    coord o1(10,13),o2(1,3),o3;
    o3=o1+12;
    o3.get_xy(x,y);
    cout<<"o3.x :"<<x<<" "<<y<<"\n";
    o3=13+o2;
    o3.get_xy(x,y);
    cout<<"o3.x :"<<x<<" "<<y<<"\n";
return 0;
}
