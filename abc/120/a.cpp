#include<iostream>
#include<vector>
using namespace std;

int main() {
	int A, B, C;


	cin >> A >> B >> C;
	int max_time = B / A;

	if (max_time > C) {
		cout << C << endl;
	}
	else {
		cout << max_time << endl;

	}


	return 0;
}