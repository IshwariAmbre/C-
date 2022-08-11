/*Accept number of rows and number of columns frm user and display below pattern

Input:     iRow=4 iCol=3

Output:    *	*	*
		   *	*	*
		   *	*	*
		   *	*	*
*/
#include<iostream>
using namespace std;

void pattern(int iRow, int iCol)
{
	for(int i=1;i<=iRow;i++)
	{
		for(int i=1;i<=iCol;i++)
		{
			cout<<"* \t";
		}
		cout<<"\n";
	}
}
int main()
{
	pattern(4,3);
	return 0;
}
