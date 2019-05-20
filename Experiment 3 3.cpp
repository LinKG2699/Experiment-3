#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	char T=0;
	int S;
	cout << "Enter size: ";
	cin >> S;
	char A[S];
	cout << "Enter characters: ";
	for (int i=0;i<S;i++)
	{
		
		cin >> A[i];
	 } 
	 for(int i=0;i<S;i++)
	 {
	 	for (int l=0; l<S-1;l++)
	 	{ if (A[l]>A[l+1])
	 	{
	 		 T=A[l];
	 		A[l]=A[l+1];
	 		A[l+1]=T;
		 }
		 } 
	 }
	 
	 for (int i=0;i<S;i++)
	 {
	 	cout << A[i];
	 	
	 }
	 _getch();
	 return 0;
}
