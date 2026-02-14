#include<bits/stdc++.h>

using namespace std;

int main() {

	int t;
	cin >> t;

	while (t--) {
	int N;
		cin	>> N;

		char logo[N][N];
		for (int row = 0; row < N; row++) {
			for (int column = 0; column < N; column++) {
				cin >> logo[row][column];
			}
		}

		bool is_symmetric = true;
		int last_index = (N - 1);
		int mid = N / 2;
		for (int q2_x = 0; q2_x < mid; q2_x++) {
			for (int q2_y = 0; q2_y < mid; q2_y++) {
				int q1_x = q2_x;
				int q1_y = last_index - q2_y;

				int q3_x = last_index - q2_x;
				int q3_y = q2_y;	

				int q4_x = last_index - q2_x;
				int q4_y = last_index - q2_y;
				if (
					logo[q2_x][q2_y] != logo[q1_x][q1_y] ||
					logo[q2_x][q2_y] != logo[q3_x][q3_y] ||
					logo[q2_x][q2_y] != logo[q4_x][q4_y] 
					) {
					is_symmetric = false;
					break;
				}
			}
			if (!is_symmetric){
				break;
			}
		}

		if (is_symmetric) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}