#include<iostream>
using namespace std;

int main()
{
    int iValue = 0;

    cout<<"Enter the number: \n";
    cin>>iValue;

    if((iValue % 2) == 0)
    {
        cout<<"It is even number \n";
    }

    else
    {
        cout<<"It is odd number\n";
    }

    return EXIT_SUCCESS;
}
