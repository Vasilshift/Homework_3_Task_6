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


	return 0;
}