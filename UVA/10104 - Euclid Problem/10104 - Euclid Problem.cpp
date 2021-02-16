#include <bits/stdc++.h>

using namespace std;


int x, y, d;

void extGcd(int a, int b) {
	if (b == 0) { x = 1; y = 0; d = a; return; }
	extGcd(b, a % b);
	x = x - (a / b) * y;
	swap(x, y);
}

int main() {

	int a, b;
	while (scanf("%d %d", &a, &b) != EOF) {
		extGcd(a, b);
		printf("%d %d %d\n", x, y, d);
	}
	return 0;
}
