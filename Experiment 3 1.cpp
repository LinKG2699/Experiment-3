#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cmath>
using namespace std;


int main()
{ int numbers[10];
int smallest = 0;
int largest = 0;
int v=0;
double sum=0;

	for (int i=0; i<10;i++) 
	{
	cout << "Enter value for number " << 1+i << ": ";
	cin >> numbers[i];
	}
	
	largest = numbers[0];
	smallest = numbers[0];
	
	for (int i=0;i<10;i++)
	{
		
		sum += numbers[i];
		v = numbers[i];
		if (v < smallest)
		smallest = v;
		else if (v > largest)
		largest = v;
		
	}
	
	cout << "Largest number is: " << largest << endl;
	cout << "Smallest number is: " << smallest << endl;
	cout << "Total: " << sum << endl;
	cout << "Average: " << sum/10 << endl;
	_getch();
	return 0;
	
}
