//Write a generic program to multiply two number
#include<iostream>
using namespace std;
template<class T>
T Multiply(T no1,T no2)
{
	T ans;
	ans=no1*no2;
	return ans;
}
int main()
{
	int iRet=Multiply(10,20);
	cout<<iRet<<endl;
	float fRet=Multiply(10.578f,20.0f);
	cout<<fRet<<endl;
	return 0;
}
