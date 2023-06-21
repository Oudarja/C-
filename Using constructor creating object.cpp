#include<iostream>
using namespace std;
class varous_ob
{
    double length=12.90;
public:
    void set_length(double l)
    {
        length=l;
    }
    void get_length()
    {
        cout<<length;
    }
    varous_ob(void)/*constructor*/
    {
        cout<<"Object is being created\n";
    }
}ob;
int main()
{
    char ch;
    double n;
    //varous_ob ob;
    cout<<"Give y or n character in case of changing length of box\n";
    cin>>ch;
    if(ch=='Y'){
    cin>>n;
    ob.set_length(n);
    ob.get_length();
    }
    else
        {ob.get_length();
        }
    return 0;
}
