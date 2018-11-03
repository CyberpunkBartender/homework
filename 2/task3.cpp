#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, x, e, i = 0;
    vector<int> v;
    cin >> N;
    while (N >=1) {
        x = N % 2;
        N = N / 2;
        v.push_back(x);
        ++i;
    }
    for (e = i - 1;e >= 0;e--) {
    	cout << v[e];
    }
    return 0;
}
