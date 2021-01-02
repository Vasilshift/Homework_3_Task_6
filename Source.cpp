#include <iostream>
using namespace std;

int main() {

	long long int num, g, sum = 0, p = 1;
	int i = 1, a;
	cout << "Please, enter value: ";
	cin >> num;

	g = num * num;
	
	while (p * 10 <= num) {
		p *= 10;
	}
	
	while (p) {

		a = num / p;
		sum = sum + a;

		num = num % p;
		p = p / 10;

	}

	if (sum * sum * sum == g) {
		cout << "condition is met! ";
	}

	return 0;
}