#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include <string>
#include <utility>

using namespace std;




int main() {

	string S;
	string ls = "WBWBWBW";
	vector<string> oto{ "Do", "B", "Re", "B", "Mi", "Fa", "B", "So", "B", "La", "B", "Si" };

	cin >> S;
	int pos = S.find(ls);
	if (5 - pos >= 0) {
		cout << oto[(5 - pos) % 12] << endl;
	}
	else {
		cout << oto[12 - (abs(5 - pos) % 12)] << endl;
	}
	




	return 0;
}