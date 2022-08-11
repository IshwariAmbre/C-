/* Accept number of rows and number of columns from user and display below pattern

Input:	iRow=4 iCol=3

Output:		1	2	3
			1	2	3
			1	2	3
			1	2	3
*/
#include<iostream>
using namespace std;
void pattern(int iRow,int iCol)
{
	for(int i=1;i<=iRow;i++)
	{
		for(int j=1;j<=iCol;j++)
		{
			cout<<j<<"\t";
		}
		cout<<"\n";
	}
}
int main()
{
	pattern(4,3);
	return 0;
}
