///An oop programing for employee info
#include<bits/stdc++.h>
using namespace std;
class Employee
{
private:
    string emp_name;
    int emp_join_year;
    float emp_salary;

public:
    Employee(string name,int _year,float _salary);
private:
    int WorkedYear();
    void Printinfo();
};
Employee::Employee(string _name,int _year,float _salary)
{

    emp_name=_name;
    emp_join_year=_year;
    emp_salary=_salary;
    Printinfo();
}

int Employee:: WorkedYear(void)
{

   time_t t = time(NULL);
   tm* tPtr = localtime(&t);
    int Year_difference;
   int current_year=(tPtr->tm_year)+1900;
    Year_difference=current_year-emp_join_year;




    return Year_difference;
}

void Employee::Printinfo(void)
{
    cout<<"Name :"<<emp_name<<'\n';
    cout<<"Join Date :"<<emp_join_year<<'\n';
    cout<<"Salary :"<<emp_salary<<'\n';
    cout<<"Worked :"<<WorkedYear()<<'\n';
    cout<<"............................\n\n";
}
int main()
{
    Employee Jack("Jack",1997,12500);
    Employee Sam("Sam",1986,7500);
    Employee Jadu("Jadu",1981,8700);
    Employee Madhu("Madhu",1974,27500);

    return 0;
}
