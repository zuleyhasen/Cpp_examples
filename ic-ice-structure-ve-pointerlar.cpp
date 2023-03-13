#include <iostream>
using namespace std;

struct Address{
    string cityName;
    int No;
};


struct Employee{
    int id;
    string name;
    string departmant;
    Address* address;
};

int main()
{
    Employee employee ={12,"mustafa murat","bilişim"};
    Address address={"ankara",5};
    employee.address= &address;
    
    Employee* ptr = &employee;
    
    cout<<ptr->address->cityName<<endl;
    cout<<ptr->address->No<<endl;
    
    
    return 0;
}    
