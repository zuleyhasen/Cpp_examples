
//pointers
#include <iostream>
using namespace std;

int main()
{
    int a =5;
    int *ptr = &a;
    cout<<"değişkenin adresi:" << &a  <<endl;
    cout<<"değişkenin adresi:" << ptr  <<endl;
    cout<<"değişken:" << a  <<endl;
    cout<<"değişken:" << *ptr <<endl;
    
    *ptr= 6;
    cout<<"değişkenin yeni değeri:" << *ptr  <<endl;
    return 0;
}
