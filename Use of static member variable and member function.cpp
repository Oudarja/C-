#include<bits/stdc++.h
using namespace std;
class Sample
{
    static int totobj;
public:
    Sample()
    {
        totobj++;
    }
    ~Sample()
    {
        totobj--;
    }
    static void Printinfo()
    {
        cout<<"\nTotal object :"<<totobj<<"\n";
    }

};
  int Sample :: totobj=0;
int main()
{
    Sample s1,s2,s3,s4,s5;
    Sample::Printinfo();
return 0;
}
