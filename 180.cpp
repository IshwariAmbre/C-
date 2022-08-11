//accept string from number and count widespaces from string
//spacebar ch space count

#include<iostream>
using namespace std;

int CountSpace(char st[])
{
    int iCnt=0;

    while(*str!='\0')
    {
        if(*str== ' ')
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

    iRet=CountSpace(Arr);
    cout<<"number of widespaces are are:" <<iRet<<endl;

    return 0;
}
