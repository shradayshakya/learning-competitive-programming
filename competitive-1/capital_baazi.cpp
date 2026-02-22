#include<bits/stdc++.h>

using namespace std;

char to_cap(char c) {
	return c - 32;
}

char to_cap_2(char c) {
	return 'A' + c - 'a';
}

int main(){
	while(true) {
		string word;
		cin >> word;
		if (word == "") {
			break;
		} 

		for (int i = 0; i < word.size(); i++) {
			char c = word[i];
			char u_c = to_cap_2(c);
			cout << u_c; 

		}
		cout << endl;
	}
}

