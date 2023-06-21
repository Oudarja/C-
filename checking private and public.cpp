#include<iostream>
using namespace std;
class mybox
{
    double width;
    public:
    double length;
    void set_width(void);
    double get_width(void);
    double get_length(void);
};
void mybox::set_width()
{
    double w;
    cin>>w;
    width=w;
}
double mybox::get_width()
{
    return width;
}
double mybox::get_length()
{
    return length;
}
int main()
{
    mybox ob[1];
    cout<<"Set the length\n";
    cin>>ob[0].length;
    cout<<"Now set width\n";
    ob[0].set_width();
    cout<<"Length is :"<<ob[0].get_length()<<"\n";
    cout<<"width is:"<<ob[0].get_width();
    return 0;
}
