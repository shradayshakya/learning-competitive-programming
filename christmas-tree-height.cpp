#include<bits/stdc++.h>

using namespace std;

int main() {

	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		int current_line[40];	
		int previous_line[40];	
		for (int line_index = 0; line_index < n; line_index++) {
			for (int column_index = 0; column_index <= line_index; column_index++) {
				if (column_index == 0 || column_index == line_index) {
					current_line[column_index] = 1;
				} else {
					int current_number = previous_line[column_index - 1] + previous_line[column_index];	
					
					current_line[column_index] = current_number;
				}
			}

			for (int column_index = 0; column_index <= line_index; column_index++) {
				int current_number = current_line[column_index];
				cout << current_number << " ";
				previous_line[column_index] = current_number;
			}
			cout << endl;
		}
	}

}