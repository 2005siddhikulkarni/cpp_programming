#include<iostream>
using namespace std;

void Maximum(int iNo1, int iNo2)
{
    if(iNo1 > iNo2)
    {
        cout<<"Maximum is: "<<iNo1<<endl;
    }

    else
    {
        cout<<"Maximum is: "<<iNo2<<endl;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout<<"Enter the first number: \n";
    cin>>iValue1;

    cout<<"Enter the second number: \n";
    cin>>iValue2;

    Maximum(iValue1, iValue2);

    return EXIT_SUCCESS;
}