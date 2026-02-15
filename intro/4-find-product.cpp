#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	scanf("%d",  &n);

	int product = 1;
	int mod = (pow(10, 9) + 7);
	while(n > 0) {
		int a;
		scanf("%d",  &a);

		product = (product * a) % mod;
		n--;
	}

	printf("%d", product);
}