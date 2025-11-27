#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	string str1, str2;

	cin >> str1 >> str2;


	int len1 = static_cast<int>(str1.length());
	int len2 = static_cast<int>(str2.length());
	
	vector<vector<int>> arr(len1 + 1, vector<int>(len2 + 1, 0));
	
	int i, j;
	for (i = 1; i <= len1; i++) {
		for (j = 1; j <= len2; j++) {
			if (str1[i-1] == str2[j-1]) arr[i][j] = arr[i - 1][j - 1] + 1;
			else arr[i][j] = max(arr[i - 1][j], arr[i][j - 1]);
		}
	}

	cout << arr[len1][len2];

	

		return 0;
}
