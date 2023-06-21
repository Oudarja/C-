#include<iostream>
using namespace std;
class car;
class truck
{
    int passenger;
    int speed;
public:
    truck(int p,int t){
    passenger=p;
    speed=t;
    }
    sp_greater(car c);
};
class car
{
    int passenger;
    int speed;
public:
    car(int p,int t)
    {
        passenger=p;
        speed=t;
    }
    friend int truck::sp_greater(car c);
};
int truck::sp_greater(car c)
    {
        return speed-c.speed;
    }
int main()
{
    int t;
    car c1(33,123),c2(34,124);
    truck t1(44,120),t2(23,122);
    t=t1.sp_greater(c1);
    if(t==0)
        cout<<"Speed are same\n";
    else if(t>0)
        cout<<"truck is faster\n";
    else
        cout<<"Car is faster\n";
    t=t2.sp_greater(c2);
    if(t==0)
        cout<<"Speed are same\n";
    else if(t>0)
        cout<<"truck is faster\n";
    else
        cout<<"Car is faster\n";
    return 0;
}

