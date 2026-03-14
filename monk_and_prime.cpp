#include<bits/stdc++.h>

using namespace std;

int main() {
	string word;
	cin >> word;

	int x = 0;

	for(int i = 0; i < word.size(); i++) {
		char alphabet = word[i];
		bool is_upper_case = alphabet < 'a';
		if (is_upper_case) {
			char lower_case_alphabet =  alphabet + ('a' - 'A');
			x -= lower_case_alphabet;
		} else {
			char upper_case_alphabet = alphabet - ('a' - 'A');
			x += upper_case_alphabet;
		}
	}

	x = x < 0 ? x * -1: x;

	bool is_x_prime = true;
	for (int i = 2; i < x; i++) {
		if (x % i == 0) {
			is_x_prime = false;
			break;
		} 
	}

	if (is_x_prime) {
		cout << '1';
	} else {
		cout << '0';
	}


}