#include<bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin >> t;

	while(t--) {
		int n, k;
		cin >> n >> k;

		int min;
		cin >> min;
		for (int i = 1; i < n; i++) {
			int element;
			cin >> element; 

			if(element < min) {
				min = element;
			} 
		}

		if (min >= k) {
			cout << 0 << endl;
		} else {
			cout << (k - min) << endl;
		}

	}

}