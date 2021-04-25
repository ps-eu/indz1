#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>

using namespace std;

int n = 7;
float delta = 0.4;

double calc(float x) {
	return (pow(x, 2) + 2) / (3 * cos(sqrt(x)) + 1);
}

int main() {
	string str = "Y";
	
	while (str == "Y") {
		float x;
		cout << "\nx:";
		cin >> x;

		if (x >= 0.4 && x <= 2.7) {
			for (int i = 0; i < n; i++) {
				cout << i + 1 << ": " << calc(x) << endl;
				x += delta;
			}
		}
		else {
			cout << "Incorect x...\n";
		}
		
		cout << "\nContinue? Y/N: ";
		cin >> str;
		transform(str.begin(), str.end(), str.begin(), ::toupper);
	}
}