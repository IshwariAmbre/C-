//Write generic program to accept N value from user and return smallest values

#include<iostream>
using namespace std;
template<class T>
T Min(T *arr,int iSize)
{
	T A=arr[0];
	for(int i=0;i<iSize;i++)
	{
		if(arr[i]<A)
		{
			A=arr[i];
		}
	}
	return A;
}
int main()
{
	int arr[]={10,20,30,40,50};
	
	float brr[]={10.08,3.7,9.8,8.7};
	
	int iRet=Min(arr,5);
	cout<<iRet<<endl;
	
	float fRet=Min(brr,4);
	cout<<fRet<<endl;
	
	return 0;
}
