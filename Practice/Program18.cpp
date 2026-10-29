#include<iostream>
using namespace std;

int main()
{
    string sName = "\0";

    cout<<"Enter the name: \n";
    cin>>sName;

    cout<<"Welcome "<<sName;

    return EXIT_SUCCESS;
}