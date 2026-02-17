#include<bits/stdc++.h>

using namespace std;

void change_array(int a[]) {
	a[0] = a[0] + 1;
}

int main() {
	int a[10];
	a[0] = 55;
	change_array(a);

	cout << a[0];

}

