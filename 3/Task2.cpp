#include <pch.h>
#include <iostream>
using namespace std;
int main() {
	double a, b;
	int i;
	cin >> a >> b;
	for (i = a; i <= b; i++)
		if (i % 2 == 0)
			cout << i << endl;
	return 0;
}