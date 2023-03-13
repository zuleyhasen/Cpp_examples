#include <iostream>
using namespace std;

struct Employee{
    int id;
    string name;
    string departmant;
    
};

int main()
{
    Employee employee1={12,"mustafa murat","bilişim"};
    /*cout<<employee1.name<<endl;
    cout<<employee1.id<<endl;
    cout<<employee1.departmant<<endl;
    employee1.name="mustafa murat coşkun"; //sonradan değiştirebilirsin
    cout<<employee1.name<<endl;*/
    
    Employee* ptr= &employee1;
    cout<<employee1.name<<endl;
    cout<<ptr->departmant<<endl;
    
    return 0;
}
