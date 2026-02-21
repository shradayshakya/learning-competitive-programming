#include<bits/stdc++.h>

using namespace std;

void increment(int *a) {
	*a = *a + 1;
}


int main() {
	int a = 5;
	cout << "Before function => " << a << endl;;
	increment(&a);
	cout << "After function => " << a << endl;;

}
