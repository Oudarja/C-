#include<iostream>
using namespace std;
class samp
{
    int i,j;
public:

    samp(int a,int b)
    {
        i=a;
        j=b;
    }
    int get_product()
    {
        return i*j;
    }
};
int main()
{
    samp *p;
    p=new samp;
    if(!p)
    {
        cout<<"Allocation error\n";
        return 1;
    }



    p->samp(4,5);
    cout<<"product:"<<p->get_product();
    return 0;
}
