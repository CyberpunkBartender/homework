#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<int> Reversed(const vector<int>& v) {
	vector<int> a;
	for (int i = v.size() - 1; i >= 0; i--) {
		a.push_back(v[i]);
	}
	return a;
}
int main() {
	vector<int> b = { 1, 2, 3, 4 };
	for (auto r : Reversed(b)) {
		cout << r << " ";
	}
}