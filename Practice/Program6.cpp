#include<iostream>
using namespace std;

void Addition(int iNo1, int iNo2)
{
    int iAns = 0;

    iAns = iNo1 + iNo2;

    cout<<"Addition is: "<<iAns<<"\n";
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout<<"Enter the first number: \n";
    cin>>iValue1;

    cout<<"Enter the second number: \n";
    cin>>iValue2;

    Addition(iValue1, iValue2);

    return EXIT_SUCCESS;
}