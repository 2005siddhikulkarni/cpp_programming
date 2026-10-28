#include<iostream>
using namespace std;

class Demo
{
    public:
        static void CheckEven(int iNo)
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

    cout<<"Enter the number: \n";
    cin>>iValue;

   Demo::CheckEven(iValue);

    return EXIT_SUCCESS;
}
