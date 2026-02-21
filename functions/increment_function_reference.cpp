#include<bits/stdc++.h>

using namespace std;

void increment(int &a) {
	a++;
}

int main() {
	int a = 5;
	cout << "Before function => " << a << endl;;
	increment(a);
	cout << "After function => " << a << endl;;

}
