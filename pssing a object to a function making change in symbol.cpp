#include<iostream>
#include<cstdlib>
using namespace std;
class dyna
{
    int *p;
public:
    dyna(int i);
    ~dyna()
    {
        free(p);
        cout<<"Freeing\n";
    }
    int get()
    {
        return *p;
    }
};
dyna::dyna(int i)
{
    p=new int(sizeof(int));
    *p=i;
}
int neg(dyna ob)
{
    return -ob.get();
}
int main()
{
    dyna o(-10),o2(20);
    cout<<o.get()<<"\n";
    cout<<neg(o)<<"\n";
    cout<<o2.get()<<"\n";
    cout<<neg(o2)<<"\n";
    cout<<o.get()<<"\n";
    cout<<neg(o)<<"\n";
    return 0;
}
