#include<bits/stdc++.h>

using namespace std;

int main(){
	string input;
	getline(cin, input);

	// string reverse;

	// for (int i = input.size() - 1; i >= 0; i-- ) {
	// 	reverse.push_back(input[i]);
	// }

	// if (reverse == input) {
	// 	cout << "Palindrome";
	// } else {
	// 	cout << "Not Palindrome";
	// }

	int leadPointer = 0;
	int backPointer = input.size() - 1;
	bool isPalindrome = true;

	while (backPointer > leadPointer) {
		if (input[leadPointer] == input[backPointer]) {
			leadPointer++;
			backPointer--;
		} else {
			isPalindrome = false;
			break;
		}
	}

	if (isPalindrome) {
		cout << "Palindrome" ;
	} else {
		cout << "Not Palindrome";
	}


}