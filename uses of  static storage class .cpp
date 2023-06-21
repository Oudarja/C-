
//static storage class keep the value of one variable unchanged between function call.here with out
//static in case of i variable value of i will be all time 6 but with static it will be 6,7,8....because
//with static storage it can maintain it's value in main function also.But if a and i can be used as both global
//variable then no need to use static storage class.
#include<iostream>
using namespace std;
void func(void);
int a=10;
int main()
{
    while(a--){
    func();
    }
    return 0;
}
void func(void)
{
    static int i=5;
    i++;
    cout<<"a is "<<a<<" i is "<<i<<"\n";
}
