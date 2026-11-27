#include<iostream>
using namespace std;

int Maximum(int iNo1, int iNo2, int iNo3)
{
    if((iNo1 > iNo2) && (iNo1 > iNo3))
    {
        return iNo1;
    }

    else if((iNo2 > iNo1) && (iNo2 > iNo3))
    {
        return iNo2;
    }

    else
    {
        return iNo3;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iResult = 0;

    cout<<"Enter the first number: \n";
    cin>>iValue1;

    cout<<"Enter the second number: \n";
    cin>>iValue2;

    cout<<"Enter the third number: \n";
    cin>>iValue3;

    iResult = Maximum(iValue1, iValue2, iValue3);
    cout<<"Maximum is: "<<iResult<<endl;

    return EXIT_SUCCESS;
}