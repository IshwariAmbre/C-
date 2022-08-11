//
#include<iostream>
using namespace std;

class ArrayX
{
	public:
		int *Arr;
		int Size;
		int Max;
		
		ArrayX(int value)
		{
			Size=value;
			Arr=new int[Size];	
		}
		~ArrayX()
		{
			delete[]Arr;
		}
		
		void Accept()
		{
			cout<<"enter value"<<endl;
			for(int i=0;i<Size;i++)
			{
				cin>>Arr[i];
			}
		}
		
			void Display()
		{
			cout<<"values are"<<endl;
			for(int i=0;i<Size;i++)
			{
				cout<<Arr[i]<<endl;
			}
		}
		
		void Maximum()
		{
			int Max=Arr[0];
			for(int i=0;i<Size; i++)
			{
				if(Arr[i]>Max)
				{
					Max=Arr[i];
				}
			}
			return Max;
		}
};

int main()
{
	ArrayX obj1(5);
	obj1.Accept();
	obj1.Display();
	int ret=obj1.Maximum();
	
	cout<<"maximum is"<<ret<<endl;	
     return 0;
}
