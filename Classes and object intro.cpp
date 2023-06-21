#include<iostream>
using namespace std;
class box
{
    public:
    double length;
    double width;
    double height;
    double volume;
};
int main()
{
    int n;
    cout<<"For how many box want to calculate volume\n";
    cin>>n;
 class box ob[n];
 int i;
 for(i=0;i<n;i++)
    {cin>>ob[i].length>>ob[i].width>>ob[i].height;
 ob[i].volume=ob[i].length*ob[i].width*ob[i].height;
}
for(i=0;i<n;i++)
    cout<<ob[i].volume<<"\n";
return 0;
}
