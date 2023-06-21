#include<iostream>
using namespace std;
class mybox
{
    public:
    double length;
    double width;
    double height;
    double volume(void);
    /*{
    return height*width*length;
    }*/
};
double  mybox::volume()
{
    return height*width*length;
}
int main()
{
    int n,i;
    cout<<"give for how many box you want find volume\n";
    cin>>n;
    class mybox ob[n];
    for(i=0;i<n;i++)
    {
        cin>>ob[i].length>>ob[i].width>>ob[i].height;
        cout<<i+1<<" no volume of box :"<<ob[i].volume();
    }
     return 0;
}

