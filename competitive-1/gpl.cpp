#include<bits/stdc++.h>

using namespace std;

int char_to_int(char c) {
	return c - '0';
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		int size;
		cin >> size;
		long long number = 0;
		for (int i = 0; i < size; i++) {
			char binary_char;
			cin >> binary_char;  
			int exp = size - 1 - i;
			int bin_digit = char_to_int(binary_char);
			long long two_with_power = pow(2, exp);
			number = number + (bin_digit * two_with_power);
		}
		cout << number << endl;
	}

}