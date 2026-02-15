#include<bits/stdc++.h>
using namespace std;

int main() {
	int number_of_testcases;
	cin >> number_of_testcases;
	while (number_of_testcases--) {
		int n;
		cin >> n;
		int sum = 0;
		while (n > 0) {
			sum += n % 10;
			n = n / 10;
		}
		cout << sum << endl;
	}
}