#include <iostream>
#include <string.h>
using namespace std;

//////privae // protected ///private////
class Employee{
protected ://protected access specifier
int salary;

};
//Derived class
class Programmer : public Employee{

public :
int bonus;
void setSalary (int s) {
    salary=s;
}
int getSalary ()
{
    return salary;
}
};

int main ()
{
Programmer obj;
obj.setSalary(300000);
obj.bonus=50000;
cout << "Salary:" <<obj.getSalary()<<endl<<endl;
cout << "Bonus :"<<obj.bonus<<endl<<endl;
return 0;


}
































