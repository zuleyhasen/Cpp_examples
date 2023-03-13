#include <bits/stdc++.h>
using namespace std;



void PrintStack(stack<string> str)
{
    if (str.empty())
        return;

    string x = str.top();
    str.pop();
    cout << x << ' ';
 
    PrintStack(str);
    str.push(x);
}
 
int main()
{
    stack<string> str;
 
    // Given stack str
    str.push("ali");
    str.push("ahmet");
    str.push("mehmet");
    str.push("selin");
 
    // Function Call
    PrintStack(str);
 
    return 0;
}