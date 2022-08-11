//accept string from user and convert to upper case
//A-Z

#include<iostream>
using namespace std;

void struprX(char st[])
{
    int iCnt=0;

    while(*str!='\0')
    {
        if((*str>='a')&&(*str<='a'))
        {
            *str = *str-32;
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

    struprX(Arr);
    cout<<" string in upper case is:"<<iRet<<endl;

    return 0;
}