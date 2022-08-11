//accept string from user and toggle case of string
//A-Z
//z-a

#include<iostream>
using namespace std;

void strtoggleX(char st[])
{
    int iCnt=0;

    while(*str!='\0')
    {
        if((*str>='a')&&(*str<='a'))
        {
            *str = *str-32;
        }
        else if((*str>='A')&&(*str<='Z'))
        {
            *str=*str+32;
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

    strtoggleX(Arr);
    cout<<" string after toggle is:"<<Arr<<endl;

    return 0;
}