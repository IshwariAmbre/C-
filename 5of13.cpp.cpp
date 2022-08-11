/*
Accept number of rows and number of columns from user and display 
below pattern.
Input : iRow = 3 iCol = 4
Output : 1 1 1 1
		 2 2 2 2
		 3 3 3 3
		 4 4 4 4
*/

#include<iostream>
using namespace std;

void pattern(int iRow, int iCol)
{
	for(int i=1;i<=iRow;i++)
	{
		for(int j=1;j<=iCol;j++)
		{
			cout<<i<<"\t";
		}
		cout<<"\n";
	}
}
int main()
{
	pattern(4,4);
	return 0;
}
