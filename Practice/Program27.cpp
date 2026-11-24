#include<iostream>
using namespace std;

int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout<<"Enter the first number: \n";
    cin>>iValue1;

    cout<<"Enter the second number: \n";
    cin>>iValue2;

    if(iValue1 > iValue2)
    {
        cout<<"Maximum is: "<<iValue1<<endl;
    }

    else
    {
        cout<<"Maximum is: "<<iValue2<<endl;
    }

    return EXIT_SUCCESS;
}