//Write generic program to accept N value from user and return largest values

#include<iostream>
using namespace std;
template<class T>
T Max(T *arr,int iSize)
{
	T A=arr[0];
	for(int i=0;i<iSize;i++)
	{
		if(arr[i]>A)
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
	
	int iRet=Max(arr,5);
	cout<<iRet<<endl;
	
	float fRet=Max(brr,4);
	cout<<fRet<<endl;
	
	return 0;
}
