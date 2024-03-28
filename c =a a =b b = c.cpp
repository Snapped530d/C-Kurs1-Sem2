
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	int first;
	int second;
	int a;
	cout << "First = ";
	cin >> first;
	cout << "Second = ";
	cin >> second;
	a = first;
	first = second;
	second = a;
	cout << "=> First = " << first;
	cout << " and Second = " << second;
	return 0; 
} 

