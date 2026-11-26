#include<iostream>
using namespace std;

float Average(int iNo1, int iNo2)
{
    float fAns = 0.0f;

    fAns = (iNo1 + iNo2) / 2;

    return fAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fResult = 0.0f;

    cout<<"Enter the first number: \n";
    cin>>iValue1;

    cout<<"Enter the second number: \n";
    cin>>iValue2;

    fResult = Average(iValue1, iValue2);
    cout<<"Average is: "<<fResult<<endl;

    return EXIT_SUCCESS;
}