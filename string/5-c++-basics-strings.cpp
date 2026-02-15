#include<bits/stdc++.h>

using namespace std;

int main() {
	// string str = "Hello";
	// cout << str[str.length() - 1];


	// string numberInLines;
	// getline(cin, numberInLines);
	// cout << numberInLines << endl;

	// int t;
	// cin >> t;
	// cin.ignore();
	// while (t--) {
	// 	string line;
	// 	getline(cin, line);
	// 	cout << line << endl;
	// }

	string text = "12345";
	int lastDigit = text[text.size() - 1] - '0';
	lastDigit += 4;

	string updated = text.substr(0, text.size() - 1) + to_string(lastDigit);

	cout << updated;
}