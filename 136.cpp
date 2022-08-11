#include<iostream.h>

using namespace std;

class Number
{
public
int Factorial(int iNo)
{
  int iFact=1;
  int iCnt=1;

  for(iCnt=1; iCnt<=iNo; iCnt++)
  {
      iFact=iFact*iCnt;
  }
  return iFact;
}
};

int main()
{
    Number nobj;
    int iValue=0;
    int iRet=0;

    cout<<"enter num: \n ";
    cin>>"iValue";

    iRet=nobj.Factorial(iValue);

    cout<<"Factorial is" iRet<<end;
    return 0;


}
