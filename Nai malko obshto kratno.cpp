#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b;
    cout << "a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    while(b!=0)
    {
        int c = b;
        b = a%b;
        a=c;
    }
    cout<<"NOD="<<a<<endl;
    return 0;
} 