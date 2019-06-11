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


	int H, W;
	cin >> H >> W;

	vector<vector<char>> campus(H);
	vector<char> inner(W, '.');
	string ans = "Yes";

	for (auto i = 0; i < H; i++)
	{
		for (auto j = 0; j < W; j++)
		{
			cin >> inner[j];
		}
		campus[i] = inner;
	}


	for (auto i = 0; i < H; i++)
	{
		for (auto j = 0; j < W; j++)
		{

			if (campus[i][j] == '.')continue;
			else {
				vector<char> around;
				if (i != 0) 	around.push_back(campus[i - 1][j]);
				if (i != H - 1)around.push_back(campus[i + 1][j]);
				if (j != 0)around.push_back(campus[i][j - 1]);
				if (j != W - 1)around.push_back(campus[i][j + 1]);
				int count = 0;
				for (auto k = 0; k < around.size(); k++)
				{
					if (around[k] == '#')count += 1;
				}
				if (count == 0) {
					ans = "No";
					break;
				}
			}

		}
		if (ans == "No")break;
	}

	cout << ans << endl;
	return 0;
}