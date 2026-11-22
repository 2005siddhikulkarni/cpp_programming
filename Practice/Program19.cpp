#include<iostream>
using namespace std;

int main()
{
    string sName = "";
    string S = "";

    cout<<"Enter the name: \n";
    getline(cin, sName);

    cout<<"Enter in the filling blanks in the sentence ______ \n";
   getline(cin, S);

    cout<<"Welcome "<<sName<<endl;
    cout<<"Your aim is _____"<<S<<endl;

    EXIT_SUCCESS;
}