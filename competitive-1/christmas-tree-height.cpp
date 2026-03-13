#include<bits/stdc++.h>

using namespace std;

int main() {

	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		long long current_line[40];	
		long long previous_line[40];	
		for (int line_index = 0; line_index < n; line_index++) {
			for (int column_index = 0; column_index <= line_index; column_index++) {
				if (column_index == 0 || column_index == line_index) {
					current_line[column_index] = 1;
				} else {
					long long current_number = previous_line[column_index - 1] + previous_line[column_index];	
					
					current_line[column_index] = current_number;
				}
			}

			for (int column_index = 0; column_index <= line_index; column_index++) {
				long long current_number = current_line[column_index];
				cout << current_number << " ";
				previous_line[column_index] = current_number;
			}
			cout << endl;
		}
	}

}