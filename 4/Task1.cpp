#include <pch.h>
#include <iostream>
using namespace std;
void UpdIfGrt(int& first, int& second) {
	if (first > second) {
		second = first;
		cout << second;
	}
	else cout << "second >= first";
}
int main() {
	int a, b;
	cin >> a >> b;
	UpdIfGrt(a, b);
	return 0;
}