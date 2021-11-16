//This is to demonstrate how to basically use sharthand if
#include<iostream>
#include<string>
using namespace std;
int main()
{
    double mark;
    cout<<"Please input mark: ";
    cin>>mark;
    string message=(mark>=50)?"Passed":"Failed";
    cout<<message;
    return 0;
    }