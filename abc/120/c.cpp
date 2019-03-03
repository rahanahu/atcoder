#include<cmath>
#include<algorithm>
#include<string>
#include<iostream>
#include<vector>

using namespace std;

int main() {

	string N;
	int red_num = 0;
	int blue_num = 0;
	cin >> N;

	int removed = 0;
	for (auto i = 0; i < N.length(); i++) {
		if (N[i] == '0') {
			red_num += 1;
		}
		else {
			blue_num += 1;
		}

		removed = N.length() - abs(red_num - blue_num);

	}
	cout << removed << endl;


	return 0;
}