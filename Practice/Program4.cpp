#include<iostream>
using namespace std;

int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;

    cout<<"Enter the first number: \n";
    cin>>iValue1;

    cout<<"Enter the second number: \n";
    cin>>iValue2;

    iResult = iValue1 + iValue2;

    cout<<iResult<<"\n";

    return EXIT_SUCCESS;
}