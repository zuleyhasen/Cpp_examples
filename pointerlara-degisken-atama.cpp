#include <iostream>
using namespace std;

void degerDegistir(int *ptr){
    *ptr=20;
    cout<<"fonksiyonun içindeki değer:"<< *ptr <<endl;
    
    
}
int main(){
    int a=10;
    cout<<"a değişkeninin değeri:"<< a <<endl;
    degerDegistir(&a);
    cout<<"fonksiyon bittikten sonra a değeri:"<< a <<endl;
 
    return 0;   
}

