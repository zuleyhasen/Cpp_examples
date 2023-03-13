#include <iostream>
using namespace std;

int main()
{
    int *ptr= new int;// dinamik memory yöntemiyle bir tane int için yer ayır
    *ptr = 5;
    
    delete ptr; //ptr nin gösterdiği tüm alanlar belleğe geri  verilsin
    
    
    
    return 0;
}
