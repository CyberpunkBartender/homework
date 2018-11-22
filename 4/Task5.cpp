#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
bool comp(int& a, int& b) {
	return abs(a) > abs(b);
}
int main() {
	int N;
	int M;
	cin >> N;
	vector<int> a = { N };
	for (N - 1; N > 0; N--) {
		cin >> M;
		a.push_back(M);
	}
	sort(a.begin(), a.end(), comp);
	for (int m = 0; m < a.size(); m++) {
		cout << a[m] << " ";
	}
}