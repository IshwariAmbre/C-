//accept string from number and count Capital charaxters of string
//A-Z

#include<iostream>
using namespace std;

int CountCapital(char st[])
{
    int iCnt=0;

    while(*str!='\0')
    {
        if((*str>='A')&&(*str<='Z'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}
int main()
{
    char Arr[20];
    int iRet=0;

    cout<<"enter string"<<endl;
    cin.getline(Arr,20);

    iRet=CountCapital(Arr);
    cout<<"number of capital characters are:" <<iRet<<endl;

    return 0;
}