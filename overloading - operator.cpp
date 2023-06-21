#include<iostream>
using namespace std;
class coord{

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
coord operator+(coord ob2);
coord operator-(coord ob2);
coord operator=(coord ob2);
};
coord coord::operator+(coord ob2)
{
    coord temp;
    x=x+temp.x;
    y=y+temp.y;
    return temp;
}
coord coord::operator-(coord ob2)
{
    coord temp;
    x=x-temp.x;
    y=y-temp.y;
    return temp;
}
coord coord::operator=(coord ob2)
{
    x=ob2.x;
    y=ob2.y;
    return *this;
}
int main()
{
    coord o1(10,10),o2(5,3),o3;
    int x,y;
    o3=o1+o2;
    o3.get_xy(x,y);
    cout<<"o1+o2 "<<x<<" "<<y<<"\n";
    o3=o1-o2;
    o3.get_xy(x,y);
    cout<<"o1-o2 "<<x<<" "<<y<<'\n';
    o3=o1;
    o3.get_xy(x,y);
    cout<<"(o3=o1) :"<<x<<" "<<y;
    return 0;
}
