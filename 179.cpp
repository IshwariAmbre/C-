//accept string from number and count small charaxters of string
//A-Z

#include<iostream>
using namespace std;

int CountSmall(char st[])
{
    int iCnt=0;

    while(*str!='\0')
    {
        if((*str>=97)&&(*str<=122))
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
    cout<<"number of small characters are:" <<iRet<<endl;

    return 0;
}