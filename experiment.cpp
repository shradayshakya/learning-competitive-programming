#include<bits/stdc++.h>

using namespace std;

int main() {
	// int a;
	// cin >> a;

	// cout << a << endl;
	// cout << &a << endl;

	int a;
	int *p_a;

	p_a = &a;
	a = 5;

	cout << p_a << endl;
	cout << *p_a << endl;

	*p_a = 6;

	
	cout << p_a << endl;
	cout << *p_a << endl;
	
}

