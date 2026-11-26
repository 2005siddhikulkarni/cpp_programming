#include<iostream>
using namespace std;

int Minimum(int iNo1, int iNo2)
{
    if(iNo1 < iNo2)
    {
        return iNo1;
    }

    else
    {
        return iNo2;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;

    cout<<"Enter the first number: \n";
    cin>>iValue1;

    cout<<"Enter the second number: \n";
    cin>>iValue2;

    iResult = Minimum(iValue1, iValue2);
    cout<<"Minimum is: "<<iResult<<endl;

    return EXIT_SUCCESS;
}
