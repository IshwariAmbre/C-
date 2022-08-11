#include<iostream>
using namespace std;

template<class T>   //template header
void SwapR(T&p,T&q)   // call by reference
{
	T temp;
	temp=p;
	p=q;
	q=temp;	
}

int main()
{
	int No1 =11;
	int No2=21;
	
	cout<<"before swap is:"<<No1<<" "<<No2<<endl;
	
	SwapR(No1 ,No2);
	cout<<"after swap is:"<<No1<<" "<<No2<<endl;
    
    return 0;
}
