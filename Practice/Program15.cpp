#include<iostream>
using namespace std;

class Demo
{
    public:
        bool CheckEven(int iNo)
        {
            if((iNo % 2) == 0)
            {
                return true;
            }

            else
            {
                return false;
            }

        }

};

int main()
{
    int iValue = 0;
    bool bRet = false;

    Demo dobj;

    cout<<"Enter the number: \n";
    cin>>iValue;

    bRet = dobj.CheckEven(iValue);

   if(bRet == true)
   {
        cout<<"It is even number \n";
   }

   else
   {
        cout<<"It is odd number \n";
   }

    return EXIT_SUCCESS;
}
