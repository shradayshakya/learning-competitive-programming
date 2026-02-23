#include<bits/stdc++.h>

using namespace std;

int main() {

	int t;
	cin >> t;

	while (t--) {
		int size;
		cin >> size;
		long long product = 1;

		while (size--) {
			int num;
			cin >> num;
			product *= num;
		}

		int last_digit = product % 10;
		if (last_digit == 2 || last_digit == 3 || last_digit == 5) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}	
}