//accept string from user and compare them
//2strings  abc=abc   boolean

#include<iostream>
using namespace std;

bool strcmpX(char *src, char *dest)  
{
    while((*src!='\0')&&(*dest!='\0'))
  {
    if(*src!=*dest)
    {
        break;
    }
    src++;
    dest++;
  }

  if(*src=='\0' && *dest=='\0')
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
    char Arr[20];  //full book
    char Brr[20];   //blank book
    bool bRet;

    cout<<"enter first string"<<endl;
    cin.getline(Arr,20);

    cout<<"enter second string"<<endl;
    cin.getline(Brr,20);

    bRet=strcmpX(Arr,Brr);
    
    if(bRet==true)
    {
        cout<<"strings are equal:"<<endl;
    }
    else
    {
        cout<<"strings are not equal:"<<endl;
    }

    cout<<" string after comparing is:"<<Arr<<endl;

    return 0;
}