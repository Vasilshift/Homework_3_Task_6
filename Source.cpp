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

				c = (sum * sum * sum);
			a = a / 10;

			}



}

	

	
		
	cout << c << " " <<  b;
		

		
	
	return 0;

				c = (sum * sum * sum);

		num = num % p;
		p = p / 10;

	}

	cout << "Sum of digits of value is: " << sum << endl;
	cout << "Cube of digits of value is: " << sum * sum * sum << endl;
	cout << "Composition of value * value is: " << g << endl;

	if (sum * sum * sum == g) {
		cout << "condition is met! ";
	}

	return 0;
}