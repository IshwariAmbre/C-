//accept string from user and convert to lower case
//a-z

#include<iostream>
using namespace std;

void strlower(char st[])
{
    int iCnt=0;

    while(*str!='\0')
    {
        if((*str>='A')&&(*str<='Z'))
        {
            *str = *str+32;
        }
        str++;
    }
}
int main()
{
    char Arr[20];
    int iRet=0;

    cout<<"enter string"<<endl;
    cin.getline(Arr,20);

    strlower(Arr);
    cout<<" string in lower case is:"<<iRet<<endl;

    return 0;
}