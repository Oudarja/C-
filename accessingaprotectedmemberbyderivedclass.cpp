#include<iostream>
using namespace std;
class box
{
    protected:
    double width=10.89;
};
class smallbox:box
{
public:
    void set_width(double w)
    {
        width=w;
    }
    void get_width()
    {
        cout<<width;
    }
};
int main()
{
    char ch;
    double n;
    smallbox ob;
    cout<<"Give y or n character in case of changing width of box\n";
    cin>>ch;
    if(ch=='Y'){
    cin>>n;
    ob.set_width(n);
    ob.get_width();
    }
    else
        ob.get_width();
    return 0;
}
