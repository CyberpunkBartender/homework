#include <iostream>
using namespace std;

int main(){
	int a(0), b(0), d(1);
    cin >> a >> b;
    int x = a;
    if(b > a){
    	x = b;
    }
    for(int i = 1; i <= x; i++){
        if(a%i == 0 && b%i == 0){
        	d = i;
        }
    }
    cout << d;
    return 0;
}
