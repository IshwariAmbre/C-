//accept string from user and copy
//2strings  concatenate

#include<iostream>
using namespace std;

void strcpyX(char *src, char *dest)  //source-full, dest-blank 
{
  while(*src!='\0')
  {
      *dest=*src;
      src++;
      dest++;
  }
  *dest='\0';
}

int main()
{
    char Arr[20];  //full book
    char Brr[20];   //blank book

    cout<<"enter string"<<endl;
    cin.getline(Arr,20);

    strcpyX(Arr,Brr);

    cout<<" string after copy is:"<<Brr<<endl;

    return 0;
}