#include <iostream>
using namespace std;
class DayOfYear{
public:
DayOfYear();
DayOfYear(int m,int d);
void output();
private:
int month;
int day;
};
DayOfYear::DayOfYear(){
month = 7;
day = 6;
}
DayOfYear::DayOfYear(int m,int d){
month =m;
day = d;
}
void DayOfYear::output(){
cout << "month = " << month
<< ", day = " << day << endl;
}
int main(){
DayOfYear yourBirthday(10,18),testbirthday;
cout << "Your birthday is ";
yourBirthday.output( );
testbirthday.output();
//Explicitly call constructor
yourBirthday = DayOfYear(10,10);
yourBirthday.output();
DayOfYear *ptr;
ptr = new DayOfYear(6,8);
ptr->output();
return 0;
}
