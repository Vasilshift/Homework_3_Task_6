#include <iostream>
using namespace std;

int main() {

	int a, i, sum = 0, c;

	cout << "Please, enter value: " << endl;
	cin >> a;

	int g = a;
	
	for (i = 0; a > 0; i++) {

			sum = sum + a % 10;
			a = a / 10;
	
	}
			c = (sum * sum * sum);
			a = a / 10;
			if (c == g * g) cout << "\nThe condition is met!" << endl;
			else cout << "\nThe condition is not met" << endl;
	
	
		return 0;
}