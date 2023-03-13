//switch case
#include <iostream>
using namespace std;

int main()
{
    int islem;
    cout<<"işlem giriniz: ";
    cin>>islem;
    switch(islem){
        case 1:
            cout<<"1. işlemi seçtiniz.."<<endl;
            break;
        case 2:
            cout<<"2. işlemi seçtiniz.."<<endl;
            break;
        case 3:
            cout<<"3. işlemi seçtiniz.."<<endl;
            break;
        default:
            cout<<"geçersiz işlem seçtiniz.."<<endl;
        
    }
    