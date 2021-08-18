
#include<iostream>

using namespace std;

class ArithmeticX
{
    public:
        int CountOdd(int);
};

int ArithmeticX::CountOdd(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;

    while(iNo != 0)
    {
        if((iNo%10)%2 != 0)
        {
            iCnt++;
        }   

        iNo /= 10;
    }
    return iCnt;
}

int main()
{
    ArithmeticX aobj;

    int iValue = 0;
    
    cout<<"Enter Number\n";
    cin>>iValue;

    int iRet = aobj.CountOdd(iValue);

    cout<<iRet<<endl;

    return 0;
}