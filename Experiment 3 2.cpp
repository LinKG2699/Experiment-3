#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int temp[21];
	int t;
	int day=0;
	
	cout << "Enter all temperature for a week of Province A, Province B and then Province C." << endl;
		for (int i=0; i<21;i++) 
	{
		if (i<7)
	{
			day = i + 1;
		cout << "Province A, ";
	cout << "Day " << day << ": ";
	cin >> temp[i];
	
}
	else if (i>6 && i<14)
	{
	day = i-6;
	cout << "Province B, ";
	cout << "Day " << day << ": ";
	cin >> temp[i];
}
	else if (i>13 && i<21)
	{
	day = i-13;
	cout << "Province C, ";
	cout << "Day " << day << ": ";
	cin >> temp[i];
}
}

cout << "Displaying Values: " << endl;
for (int i=0; i<7; i++)
{

t = temp[i];
	day = i + 1;
	cout << "Province A, Day " << day << "= " << t << endl;
}
	for (int i=7; i<14; i++)
{
	t = temp[i];
	day = i-6;
	cout << "Province B, Day " << day << "= " << t << endl;
}
	for (int i=14; i<21; i++)
{
		t = temp[i];
	day = i-13;
	cout << "Province C, Day " << day << "= " << t << endl;
}


_getch();
return 0;
}

