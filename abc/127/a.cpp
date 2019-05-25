#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<string>
#include <utility>

using namespace std;


int main() {

	int age, price;

	cin >> age >> price;

	if (age > 12) {
		cout << price << endl;
	}
	else if (age >= 6 && age <= 12) {
		cout << price / 2 << endl;
	}
	else {
		cout << 0 << endl;
	}


	return 0;
}