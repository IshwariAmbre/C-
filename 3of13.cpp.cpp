/*
Accept number of rows and number of columns from user and display 
below pattern.

Input : iRow = 3 iCol = 5

Output : 5 4 3 2 1
		 5 4 3 2 1
		 5 4 3 2 1
*/
#include<iostream>
using namespace std;
void pattern(int iRow,int iCol)
{
	for(int i=0;i<iRow;i++)
	{
		for(int j=iCol;j>0;j--)
		{
			cout<<j<<"\t";
		}
		cout<<"\n";
	}
}
int main()
{
	pattern(3,5);
	return 0;
}
