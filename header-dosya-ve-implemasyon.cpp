//employee.h header file
#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
#include <iostream>
using namespace std;

class Employee{
public:
    string name;
    int id;
    int salary;
    
    void showInfos();
};


#endif/*EMPLOYEE_H_*/

//employee.cpp
#include "Employee.h"

void Employee::showInfos(){
    
    cout<<"ıd:"<<Employee::id<<endl;
    cout<<"name:"<<Employee::name<<endl;
    cout<<"salary:"<<Employee::salary<<endl;
    
}

//main file

#include "Employee.h"


int main(){
    
    Employee employee;
    employee.id=12;
    employee.name="züleyha";
    employee.salary=3000;
    employee.showInfos();
    
    return 0;
}



