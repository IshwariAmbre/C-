//accept string from user and concatenate
//2strings  concatenate1

#include<iostream>
using namespace std;

void strcatX(char *src, char *dest)  //source-full, dest-blank 
{
    while(*dest!='\0')
    {
        dest++;
    }
    
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

    cout<<"enter first string"<<endl;
    cin.getline(Arr,20);

    cout<<"enter second string"<<endl;
    cin.getline(Brr,20);

    strcatX(Arr,Brr);

    cout<<" string after concatenation is:"<<Brr<<endl;

    return 0;
}