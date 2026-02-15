#include<bits/stdc++.h>
using namespace std;

int main() {
	for (int i = 1; i <= 100; i++) {
		bool divisibleBy3 = i % 3 == 0;
		bool divisibleBy5 = i % 5 == 0;
		if(divisibleBy3) {
			cout << "Fizz";
		}

		if (divisibleBy5) {
			cout << "Buzz";
		}

		if (!divisibleBy3 && !divisibleBy5) {
			cout << i;
		}

		cout << endl;
	}
}