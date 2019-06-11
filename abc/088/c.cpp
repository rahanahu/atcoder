#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<string>
#include<utility>
#include<array>
#include<set>
#define EPS (1e-7)
using namespace std;






int main() {


	vector<vector<int>> grid(3);
	vector<int> inner(3);
	int a1, a2, a3, b1, b2, b3;
	string ans = "No";

	for (auto i = 0; i < 3; i++) {
		for (auto j = 0; j < 3; j++)
		{
			cin >> inner[j];
		}
		grid[i] = inner;
	}

	for (auto i = 0; i <= 100; i++)
	{
		a1 = i;
		b1 = grid[0][0] - a1;
		b2 = grid[0][1] - a1;
		b3 = grid[0][2] - a1;

		a2 = grid[1][1] - b2;
		a3 = grid[2][2] - b3;

		for (auto i = 0; i < 3; i++) {
			for (auto j = 0; j < 3; j++)
			{
				if (a1 + b1 == grid[0][0]
					&& a1 + b2 == grid[0][1]
					&& a1 + b3 == grid[0][2]
					&& a2 + b1 == grid[1][0]
					&& a2 + b2 == grid[1][1]
					&& a2 + b3 == grid[1][2]
					&& a3 + b1 == grid[2][0]
					&& a3 + b2 == grid[2][1]
					&& a3 + b3 == grid[2][2]) {
					ans = "Yes";
					break;
				}
			}
			if (ans == "Yes")break;
		}




	}



	cout << ans << endl;
	return 0;
}