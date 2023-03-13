//functions
#include <iostream>
using namespace std;

void selamla(){
    cout<<"naber?"<<endl;
    cout<<"nasılsın?"<<endl;
}

int main()
{
    selamla();
    return 0;
}
------------------------------------

#include <iostream>
using namespace std;

void factorial(int sayi){
    int factorial = 1;
    for(int i=2 ; i<= sayi ; i++){
        factorial *= i;
    }
    cout<<"fakroriyel:"<<factorial<<endl;
}

int main()
{
    int sayi;
    cout<<"sayı giriniz:";
    cin>> sayi;
    factorial(sayi);
    return 0;
}    