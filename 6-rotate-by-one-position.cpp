#include<bits/stdc++.h>
using namespace std;

int main() {
	int size;
	cin >> size;

	int output[size];
	for(int i = 0; i < size; i++ ) {
		int shift = (i + 1) % size;

		int input;
		cin >> input; 

		output[shift] = input;

	}


	for(int i = 0; i < size; i++ ) {
		cout << output[i] << ' '; 
	}

}