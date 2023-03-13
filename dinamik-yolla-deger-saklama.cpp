#include <iostream>
using namespace std;

int main()
{
    int *ptr;
    int size;
    
    cout<<"kaç değer saklayacaksınız:"<<endl;
    cin>>size;
    
    ptr= new int[size];
    
    for(int i=0 ; i<size ; i++){
        cout<<"değer:"<<endl;
        cin >> ptr[i];
    }
    
    for(int i=0 ; i<size ; i++){
        cout<<"eleman:"<<ptr[i]<<endl;
    }
    delete [] ptr;
    return 0;
}
