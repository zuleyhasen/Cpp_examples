#include <iostream>
using namespace std;

int main(){
    string sys_username="edanurktrl";
    string sys_password="12345";
    
    string username;
    string password;
    
    while(true){
        cout << "kullanıcı adı:" ;
        cin >> username;
        cout << "parola:";
        cin >> password;
        if (sys_username == username && sys_password == password){
            cout << "Hoşgeldiniz " << username << endl;
            break;
        }
        else if (sys_username != username && sys_password == password){
            cout << "kullanıcı adı hatalı" << endl;
        }
        else if (sys_username == username && sys_password != password){
            cout << "parola hatalı" << endl;
        }
        else{
            cout << "parola ve kullanıcı adı hatalı" << endl;
        }
    }
    return 0;
}
