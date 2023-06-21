#include<iostream>
#include<cctype>
using namespace std;
class circle
{
    public:
    double radius;
    void set_radi(void)
    {
        cout<<"Give new input\n";
        double r;
        cin>>r;
        radius=r;
    }
    void show(void)
    {
        cout<<3.1416*radius*radius;
    }
};
int main()
{
    char ch;
    circle ob[1];
    cout<<"Give the radius of circle\n";
    cin>>ob[0].radius;
    cout<<"If radius is fixed press s\nelse press c\n";
    cin>>ch;
    if(ch=='c')
    {
     ob[0].set_radi();
     ob[0].show();
    }
    else
        ob[0].show();
    return 0;
}
