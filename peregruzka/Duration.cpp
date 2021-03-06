#include <pch.h>
#include <iostream>
#include <iomanip>
using namespace std;
class  Duration{
public:
	int hour, min;
	void change(int hr, int mn) {
		hr = hour;
		mn = min;
		hour = hour + min / 60;
		min = min % 60;
	}
};
ostream& operator<<(ostream& ostream, Duration& dur)
{
	ostream << setfill('0');
	ostream << setw(2) << dur.hour << ":" << setw(2) << dur.min;
	return ostream;
}
Duration operator+(Duration& dur1, Duration& dur2) {
	int h = dur1.hour + dur2.hour;
	int m = dur1.min + dur2.min;
	Duration dur3;
	dur3.hour = h;
	dur3.min = m;
	dur3.change(h, m);
	return dur3;
}
int main() {
	Duration dur1;
	cin >> dur1.hour >> dur1.min;
	Duration dur2;
	cin >> dur2.hour >> dur2.min;
	Duration dur3;
	dur3 = dur1 + dur2;
	cout << dur3;
	return 0;
}