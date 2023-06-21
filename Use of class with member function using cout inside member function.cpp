#include<iostream>
using namespace std;
class mybox
{
    public:
    double length;
    double width;
    double height;
    void volume()
    {
    //return height*width*length;
    cout<<"length*width*height<<"\n";
    }
};
int main()
{
    int n,i;
    cout<<"give for how many box you want find volume\n";
    cin>>n;
    class mybox ob[n];
    for(i=0;i<n;i++)
    {
        cin>>ob[i].length>>ob[i].width>>ob[i].height;
        /*cout<<*/ob[i].volume();
    }
     return 0;
}
