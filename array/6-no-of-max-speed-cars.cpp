#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while(t--) {
		int no_of_cars;
		cin >> no_of_cars;

		int c1;
		cin >> c1;

		int max_speed = c1;
		int no_of_max_speed = 1;
		while(--no_of_cars){
			int current_car_speed;
			cin >> current_car_speed;

			if (current_car_speed < max_speed) {
				max_speed = current_car_speed;
				no_of_max_speed++;
			}
		}

		cout << no_of_max_speed << endl;
	}
	
}