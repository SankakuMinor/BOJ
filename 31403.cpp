#include <iostream>
#include <string>
using namespace std;

int main() {
	string A, B, AB;
	int C;

	cin >> A >> B >> C;
	AB = A + B;
	int AB_int = stoi(AB);

	cout << stoi(A) + stoi(B) - C << endl;
	cout << AB_int - C << endl;

	return 0;
}
