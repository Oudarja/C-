#include<bits/stdc++.h>
#define ll long long int
using namespace std;


template <typename T1,typename T2>

class Pr
{

T1 first;
T2 second;

public:

void info()
{
cout<<first<<' '<<second<<'\n';
}
Pr(T1 f, T2 s)
{
first=f;
second=s;
}

};


int main(){


Pr<int,float>xx(10,12.5);
xx.info();

Pr<string,string>xx1("Oudarja","Barman");

xx1.info();

return 0;

}
