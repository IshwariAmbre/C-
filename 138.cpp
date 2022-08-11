#include<iostream>

using namespace std;

class Number
{
    private:
     int iNo;  //characteristics

    public:
      void Accept()    //setter
    {
        cout<<"enter value"<<end;
        cin>>this->iNo;
    }
    void Display()   //getter
    {
        cout<<"Value is: "<<this->iNo<<end;
    }

int Factorial()
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
    int iRet=0;

   nobj.Accept();   //non static method
   nobj.Display();

    iRet=nobj.Factorial();

    cout<<"Factorial is" <<iRet<<end;
    return 0;

}