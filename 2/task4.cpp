#include <iostream>
using namespace std;

int Factorial(int& f) {
    int b = 1;
    if (f>0) {
    	for (int i=1; i<=f; i++ ) {
    		b=b*i;
    	}
    	return b;
    }
    else return 1;
}
int main () {
    int a;
    cin >> a;
    cout << Factorial (a);
    return 0;
}
