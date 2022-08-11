/*
Accept number of rows and number of columns from user and display 
below pattern.

Input : iRow = 3 iCol = 4

Output : * # * #
		 * # * #
		 * # * #
*/

#include<iostream>
using namespace std;
void pattern(int iRow,int iCol)
{
	for(int i=1;i<=iRow;i++)
	{
		for(int j=1;j<=iCol;j++)
		{
			if(j%2==0)
			{
				cout<<"#\t";
			}
			else
			{
				cout<<"*\t";	
			}
		}
		cout<<"\n";
	}
}
int main()
{
	pattern(3,4);
	return 0;
}
