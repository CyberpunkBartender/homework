#include <pch.h>
#include <iostream>
using namespace std;
int main() {
	double a, b, n, x, y;
	cin >> a >> b >> n >> x >> y;
	if (a < b) {
		if (a < n && b > n) {
			cout << n - n * (x / 100);
		}
		else if (a > n) {
			cout << n;
		}
		else if (b < n) {
			cout << n - n * (y / 100);

		}
	}
	else cout << "error" << endl;
	return(0);
}