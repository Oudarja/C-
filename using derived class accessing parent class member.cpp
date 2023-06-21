#include<iostream>
using namespace std;
class box
{
    protected:
    double length;
public:
    double width;
};
class smallbox:box
{
    public:
    void set_length(void)
    {
        double ln;
        cin>>ln;
        length=ln;
    }
    double get_length(void)
    {
        return length;
    }
};
int main()
{
    int n,i;
    cout<<"Give for how much box want to set and get length and width\n";
    cin>>n;
    smallbox box;
    box ob[n];
    cout<<"Now start giving first length and then width\n";
    for(i=0;i<n;i++)
    {
        ob[i].set_length();/*as length is a public so member func is needed*/
        cin>>ob[i].width;/*as it is not a private then no member func is need*/
    }
    for(i=0;i<n;i++)
    {
        cout<<"Length="<<ob[i].get_length()<<" "<<"width="<<ob[i].width<"\n";
    }
    return 0;

}
