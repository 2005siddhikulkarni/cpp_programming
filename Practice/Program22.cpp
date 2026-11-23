#include<iostream>
using namespace std;

int main()
{
    char sName[30] = "\0";
    float fMarks = 0.0;
    int iAge  = 0;

    cout<<"Enter yor name: \n";
    cin.getline(sName, 30);

    cout<<"Enter your age: \n";
    cin>> iAge;

    cout<<"Enter your marks: \n";
    cin>> fMarks;

    cout<<"Welcome "<<sName<<endl;
    cout<<"Your age is: "<<iAge<<endl;
    cout<<"Your marks: "<<fMarks<<endl;

    return EXIT_SUCCESS;
}