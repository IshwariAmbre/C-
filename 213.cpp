//accept n num and dsplay
#include<iostream>
using namespace std;
 
 template<class T>
 
void Display( T Arr[],int size)   //size remains integer only
{
	int i=0;
	for(i=0;i<size;i++)	
	{
		cout<<Arr[i]<<endl;
	}
}

int main()
{
	int Arr[]={10,20,30,40,50};
	Display(Arr,5);	
	
	
	float Frr[]={10.11,20.11,30.11,40.11,50.11};
	Display(Frr,5);	
		
    return 0;
}
