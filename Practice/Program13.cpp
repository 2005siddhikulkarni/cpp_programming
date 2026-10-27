#include<iostream>
using namespace std;

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
int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter the number: \n";
    cin>>iValue;

   bRet = CheckEven(iValue);

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
