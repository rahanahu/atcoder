#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include <string>
#include <utility>
#include<array>
#include<set>
#define EPS (1e-7)
using namespace std;




int main() {

	int A, B, C, D;
	char a, b, c, d;
	cin >> a >> b >> c >> d;


	A = (int)a - 48;
	B = (int)b - 48;
	C = (int)c - 48;
	D = (int)d - 48;


	if (A + B + C + D == 7) { cout << A << "+" << B << "+" << C << "+" << D << "=" << "7" << endl; return 0; }
	if (A + B + C - D == 7) { cout << A << "+" << B << "+" << C << "-" << D << "=" << "7" << endl; return 0; }
	if (A + B - C + D == 7) { cout << A << "+" << B << "-" << C << "+" << D << "=" << "7" << endl; return 0; }
	if (A + B - C - D == 7) { cout << A << "+" << B << "-" << C << "-" << D << "=" << "7" << endl; return 0; }
	if (A - B + C + D == 7) { cout << A << "-" << B << "+" << C << "+" << D << "=" << "7" << endl; return 0; }
	if (A - B - C + D == 7) { cout << A << "-" << B << "-" << C << "+" << D << "=" << "7" << endl; return 0; }
	if (A - B + C - D == 7) { cout << A << "-" << B << "+" << C << "-" << D << "=" << "7" << endl; return 0; }
	if (A - B - C - D == 7) { cout << A << "-" << B << "-" << C << "-" << D << "=" << "7" << endl; return 0; }

	return 0;
}