//accept n num and dsplay maximum
#include<iostream>
using namespace std;


int Maximum( int Arr[],int no)  //size remains integer only
{
	int i=0;
	int Max=Arr[0];
	
	for(i=0;i<no;i++)	
	{
		if(Arr[i]>Max)
		{
			Max=Arr[i];
		}	
	}
   return Max;
}

int main()
{
 int Brr[]={10,20,30,40,50}
 int iret=Maximum(Brr,5);
 cout<<"maximum is"<<iret<<endl;

    return 0;
}
