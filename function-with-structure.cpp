#include <iostream>
using namespace std;

struct Employee{
    int id;
    string name;
    string departmant;
    
};

void show(Employee* employee){
    employee->id=30;
    cout<<"id:"<<employee->id<<endl;
    cout<<"name:"<<employee->name<<endl;
    cout<<"departmant:"<<employee->departmant<<endl;
}

void showEmployee(Employee employee){
    employee.id=30;
    cout<<"id:"<<employee.id<<endl;
    cout<<"name:"<<employee.name<<endl;
    cout<<"departmant:"<<employee.departmant<<endl;
    
}

int main()
{
    Employee employee1={12,"mustafa murat","bilişim"};
    
    showEmployee(employee1);
    //show(&employee1);
    cout<<employee1.id<<endl; //pointer yardımıyla değiştirebiliyoruz değeri
    return 0;
}

