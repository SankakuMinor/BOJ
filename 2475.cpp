#include <iostream>
using namespace std;

int main() {
	int A, B, C, D, E;
	cin >> A >> B >> C >> D >> E;
	cout << (A * A + B * B + C * C + D * D + E * E) % 10;
	return 0;
}
