#include <iostream>
using namespace std;
 
class GradeBook{
public:
    void displayMessage(string courseName){
        cout<<"welcome to the Grade Book for "<<courseName<<"!"<<endl;
    }
};
int main()
{
    string nameofCourse;
    GradeBook myGradeBook;
    cout<<"enter course name:"<<endl;
    cin>>nameofCourse;             <------------   //getline(cin, nameofCourse);
    myGradeBook.displayMessage(nameofCourse);     // cout<<endl;

    return 0;
}
