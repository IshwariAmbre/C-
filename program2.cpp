// Write generic program to find largest number from three numbers
#include<iostream>
using namespace std;
template<class T>
T Max(T no1,T no2,T no3)
{
	if((no1>no2)&&(no1>no3)) 
	{
		return no1;
	}
	else if((no2>no3)&&(no2>no3))
	{
		return no2;
	}
	else
	{
		return no3;
	}
}
int main()
{
	int iRet=Max(10,20,89);
	cout<<iRet<<endl;
	float fRet=Max(10.578f,20.89f,7.8f);
	cout<<fRet<<endl;
	return 0;
}

