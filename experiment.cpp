#include<bits/stdc++.h>

using namespace std;

int main() {
	int a;
	cin >> a;

	cout << a << endl;
	cout << &a << endl;

	int a;
	int *p_a;

	p_a = &a;
	a = 5;

	cout << p_a << endl;
	cout << *p_a << endl;

	*p_a = 6;

	
	cout << p_a << endl;
	cout << *p_a << endl;

	int a[10]; 
	cout << &a << endl; 
	cout << &a[0] << endl; 
	cout << a + 1 << endl; 
	cout << &a[1] << endl; 
	cout << &a[2] << endl; 
	cout << &a[3] << endl; 
	cout << &a[4] << endl; 
	cout << &a[5] << endl; 
	
	int a;
	int *p;
	int **dp;
	p = &a;
	dp = &p; 

	cout << a << endl;
	cout << &a << endl;
	cout << p << endl;
	cout << &p << endl;
	cout << dp << endl;
	cout << &dp << endl;

	int a[10];
	a[0] = 1;
	a[1] = 2;

	cout << a << endl;
	cout << &a[0] << endl;
	cout << a[0] << endl;
	cout << *a << endl;
	cout << a[1] << endl;
	cout << *(a + 1) << endl;
}

