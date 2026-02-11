#include<bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;
	int arr[n];

	int target;
	cin >> target;

	int occurrence = 0;
	for (int i = 0; i < n; ++i) {
		int num;
		cin >> num;
		if (target == num) {
			occurrence++;
		}
	}

	cout << occurrence;
}