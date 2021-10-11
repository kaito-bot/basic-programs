												// Program to SWAPE to numbers.
#include<iostream>
using namespace std;

int main()
{
	int a, b, c;
	
	cout << "Enter Value of a : ";
	cin >> a;
	
	cout << "Enter Value of b : ";
	cin >> b;

	c = a + b;
	
	cout << "\nBefore Swaping \n a = " << a << "\n b = " << b << endl;	
		
	a = b;
	b = c - a;
	
	cout << "\nAfter Swaping \n a = " << a << "\n b = " << b << endl;
}
