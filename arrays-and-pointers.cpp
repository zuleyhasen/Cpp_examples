
#include <iostream>
using namespace std;
/*
int main()
{
    int array[]={1,2,3,4};
    cout<<array[1]<<endl;
    cout<<array<<endl; //arrayin başlangıç adresi
    cout<<array+1<<endl;//integer değerleri 4 byte yer kaplar
    
    /*int *ptr = array;
    
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    
    ptr = ptr + 1;
    cout<<ptr<<endl;
    
    int *ptr = &array[2];  
    cout<<ptr<<endl;
    return 0;
}
*/
int main(){
    string array[]={"murat","mustafa","coşkun"};
    string *ptr = array;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<*(ptr+1)<<endl;
    cout<<ptr[1]<<endl;
    cout<<array[2]<<endl;
    
    return 0;
}







