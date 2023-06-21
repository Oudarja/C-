#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);//this two line make input and output efficient
    double x;
    //double a=0.3*3+0.1;
    while(cin>>x){
    cout<<setprecision(20)<<x<<"\n";
    //cout<<max(max(max(2,3),345),1230);it can be used
    return 0;
}
