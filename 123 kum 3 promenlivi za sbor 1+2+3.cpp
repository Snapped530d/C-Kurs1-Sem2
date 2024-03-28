
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	int x = 123;
	int a , b , c , sum;
	a = x/100;
	b = x/10 % 10;
	c = x % 10;
	sum = a + b + c;
	cout << "Sum = " << sum;
} 