#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	int n, sum = 0;
	cout<<"n=";
	cin>>n;
	cout<<"Enter the numbers:";
	for(int i=1; i<=n; i++)
	{
	    int num;
	    cin>>num;
	    sum=sum+num;
	}
	cout<<"The sum is:"<<sum<<endl;
	return 0;
} 