#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double a,b,c,x;
	cin a,b,c;
	if ((b*b-4*a*c)>=0) {
		x=(-1*b-sqrt(b*b-4*a*c))/(2*a);
		cout << x << endl;
		x=(-1*b+sqrt(b*b-4*a*c))/(2*a);
		cout << x << endl;
	}
	else {
		cout << "impossible" << endl;	}
	}
