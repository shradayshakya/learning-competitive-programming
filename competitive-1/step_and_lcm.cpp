#include<bits/stdc++.h>

using namespace std;

int main () {

	int a, b, c;
	cin >> a >> b >> c;

	int cth_number = 0; 
	int match_count = 0;
	int current_number = 2;

	while(match_count != c) {
		bool is_divisible_by_a = current_number % a == 0;
		bool is_divisible_by_b = current_number % b == 0;
		if (is_divisible_by_a || is_divisible_by_b) {
			cth_number = current_number;
			match_count++;
		} 
		current_number++;
	}

	int step_number = cth_number % a == 0 ? a : b;

	if (cth_number % a == 0 && cth_number % b == 0) {
		int lcm_number = a < b ? a : b;

		while (lcm_number % a != 0 || lcm_number % b != 0) {
			lcm_number++;
		}

		step_number = lcm_number;
	}

	for (int i = cth_number; i >= 0; i -= step_number) {
		cout << i << ' ';
	}
}