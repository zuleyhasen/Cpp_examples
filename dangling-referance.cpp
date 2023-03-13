#include <iostream>
using namespace std;

int main()
{
   /* int *ptr= nullptr;//bellekte herangi bir yer göstermiyor
    ptr=new int;
    *ptr =10;
    delete ptr;*/
     
    int *ptr1= nullptr;
    int *ptr2= nullptr;
    ptr1 = new int;
    *ptr1=10;
    ptr1=ptr2; //ptr2 de ptr1 ile aynı yeri gösteriyor
    delete ptr1; //ptr1 ve ptr2 geçersiz yer gösteriyor o yüzden hata alırsın
    *ptr2=20;
    cout<<*ptr2<<endl;
    return 0;
}
