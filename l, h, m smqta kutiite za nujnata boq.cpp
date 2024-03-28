
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	double l , h , m , x , s;
    cout << "Vyvedete dyljinata:";
    cin >> l;
    cout << "Vyvedete shirinata:";
    cin >> h;
    cout << "Vyvedete ploshta na stenata:";
    cin >> m;
    s = l * h;
    x = ceil(s/m);
    cout << "Kutiite za boq sa:";
    cout << x;
    return 0;
} 
