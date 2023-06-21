#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{

    ll  i,j,k;
    ll p=2;
     ll q=3;
   ///[ ] this is capture part where if any local varaible have to be changed than this should be passed by reference
    auto print_message = [ ](string message)
    {
        cout << message << "\n";
    };

    auto gunkori=[ ](ll u,ll v )
    {
        return u*v;
    };

    ///Here the value of p and q has been changed as captured by reference and the lamda has scope on it's local varaible
     auto gunkoribyreference=[ & ]( )
    {
        p++;
        q++;
        return p*q;
    };


    for(int i = 0; i < 10; i++)
        print_message("Hello!");


      cout<<gunkori(p,q)<<'\n';

      cout<<gunkoribyreference()<<'\n';

      cout<<p<<" "<<q;

return 0;

}

