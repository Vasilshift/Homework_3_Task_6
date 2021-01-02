#include <iostream>
using namespace std;

int main() {

	long long int num, p = 1;
	int i = 1, a, sum = 0;
	cout << "Please, enter value: ";
	cin >> num;

	while (p * 10 <= num) {
		p *= 10;
	}

	while (p) {

		a = num / p;
		sum = sum + a;
		
		num = num % p;
		p = p / 10;

	}
	
	cout << sum << " ";




	/*a = x / 100;
	b = x / 10 % 10;
	c = x % 10;

	cout << a << " " << b << " " << c;
	

	for (i = 100; i <= 999; i++) {

		a = i / 100;
		b = i / 10 % 10;
		c = i % 10;

		if (a == b || a == c || c == b) {

			s++;

		}

	}

	cout << s;*/

	return 0;
}