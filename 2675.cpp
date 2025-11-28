#include <iostream>
#include <string>

using namespace std;

int main() {
	int T, R, l;
	string P;
	cin >> T;
	for (int _ = 0; _ < T; _++) {
		cin >> R >> P;
		l = static_cast<int>(P.length());
		for (int i = 0; i < l; i++)
			for (int j = 0; j < R; j++) 
				cout << P[i];
		cout << endl;
	}
	return 0;

}
