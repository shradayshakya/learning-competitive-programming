#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while(t--) {
		int size;
		cin >> size;

		string bin_number;
		cin >> bin_number;

		long long result = 0;
		long long power_2 = 1;

		for(int i = size - 1; i >= 0; i--) {
			int bin_digit = bin_number[i] - '0'; 
			result = result + (bin_digit * power_2);
			power_2 *= 2;
		}

		cout << result << endl;
	}
	
}