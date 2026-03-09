#include<bits/stdc++.h>

using namespace std;

int main () {

	int a, b, c;
	cin >> a >> b >> c;

	int a_and_b_step_value = 0; 
	int a_and_b_current_value = 0; 
	int current_match = 0; 

	int match_count = 0;
	int current_number = 1;
	while(match_count != c) {
		bool is_divisible_by_a = current_number % a == 0;
		bool is_divisible_by_b = current_number % b == 0;
		bool is_divisible_by_a_and_b = is_divisible_by_a && is_divisible_by_b;
		if (is_divisible_by_a_and_b || is_divisible_by_a || is_divisible_by_b) {
			match_count++;
			current_match = current_number;
		} 

		if (is_divisible_by_a_and_b) {
			a_and_b_step_value = a_and_b_current_value;
			a_and_b_current_value = current_number;
		}
		current_number++;
	}

	a_and_b_step_value = current_match == a_and_b_current_value ? a_and_b_step_value: a_and_b_current_value;

	cout << current_match << " " << a_and_b_step_value; 
	
}