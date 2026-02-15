#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int count = 0;
	vector<int> numbers;

	if (n % 2 == 1) {
		cout << count << endl;
		return 0;
	}
	int end = n;
	for (int length = 1; length < end; length++) {
		int nAfterDeductingLength = n - 2 * length;
		int breadth = nAfterDeductingLength / 2;
		if (nAfterDeductingLength % 2 == 0 && breadth != length) {
			count++;
			end = breadth;
		}
	}
	cout << count << endl;

}