#include<iostream>
using namespace std;

class Demo
{
    public:
        void CheckEven(int iNo)
        {
            if((iNo % 2) == 0)
            {
                cout<<"It is even number \n";
            }

            else
            {
                cout<<"It is odd number\n";
            }

        }
};

int main()
{
    int iValue = 0;

    Demo dobj;

    cout<<"Enter the number: \n";
    cin>>iValue;

    dobj.CheckEven(iValue);

    return EXIT_SUCCESS;
}
