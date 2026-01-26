#include<bits/stdc++.h>
using namespace std;

int main(){
	// float a = 3 / 2;
	// cout << a; // prints 1 not 1.5

	
	// cout << 3 * 7 / 2; // 10	

	// int a = 2147483647 + 1;
	// cout << a; // -2147483648

	// double a = 10000;
	// double b = 10000;
	// double c = a * b;
	// cout << fixed << setprecision(0) << c << endl;
	// fixed => prevents output in scientific notation
	// setprecision => sets the precisions to be displayed

	/*
	Given rectangle of length l and b. Print the area of the rectangle.

	Constraints 
	1 <= l <= 10^9
	1 <= b <= 10^9

	Input format:
	2 space separated integer l and b

	Sample input:
	3 4

	Sample output
	12
	*/
	int l, b;
	cin >> l >> b;
	long long area = l * 1LL * b;
	cout << area;

}