#include<bits/stdc++.h>

using namespace std;

int main(){
	string input;
	getline(cin, input);
	string reverse;

	for (int i = input.size() - 1; i >= 0; i--) {
		// reverse = reverse + input[i]; -- Bad time complexity
		reverse.push_back(input[i]);

	}
	cout << reverse;
	
}