#include<iostream>
using namespace std;

float Average(int iNo1, int iNo2, int iNo3)
{
    float fAns = 0.0f;

    fAns = ((float)iNo1 + (float)iNo2 + (float)iNo3) / 3;

    return fAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    float fResult = 0.0f;

    cout<<"Enter the first number: \n";
    cin>>iValue1;

    cout<<"Enter the second number: \n";
    cin>>iValue2;

    cout<<"Enter the third number: \n";
    cin>>iValue3;

    fResult = Average(iValue1, iValue2, iValue3);
    cout<<"Average is: "<<fResult<<endl;

    return EXIT_SUCCESS;
}