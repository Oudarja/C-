#include<iostream>
using namespace std;
class mybox
{
    double height;
    public:
    double length;
    double width;
    void set_height(void)
    {
        double h;
        cin>>h;
        height=h;
    }
    void set_length(void)
    {
        double l;
        cin>>l;
        length=l;
    }
    void set_width(void)
    {
        double w;
        cin>>w;
        width=w;
    }
    void volume(void)
    {
        cout<< height*length*width;
    }
};
int main()
{
    cout<<"Give for how many boxes  want to calculate volume\n";
    int n,i;
    cin>>n;
    mybox ob[n];
    for(i=0;i<n;i++)
    {
     ob[i].set_height();
     ob[i].set_length();
     ob[i].set_width();
     ob[i].volume();
    }
    return 0;
}
