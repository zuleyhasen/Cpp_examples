
#include <iostream>
using namespace std;
 
/* void printArray(int array[],int size){
    
    for (int i=0; i<size; i++){
        cout<<array[i]<<endl;
    } 
 }
 
int main()
{
    int a[]={1,2,3,4,5};
    printArray(a , 5);

    return 0;
}
------------------------------------------------------*/
 void printArray(int *ptr,int size){
    
    for (int i=0; i<size; i++){
        cout<<ptr[i]<<endl;
    } 
 }
 
int main()
{
    int a[]={1,2,3,4,5};
    printArray(a , 5);

    return 0;
}
