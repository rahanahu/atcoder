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



void clawl(vector<vector<int>> map, vector<vector<int>> &ans, int N, int x = 0, int y = 0, int pre = 0) {

	//if (!(x == 1 && y == N-1)) {
	int count = max(pre + map[x][y], ans[x][y]);
	ans[x][y] = count;
	if (x != 1) clawl(map, ans, N, x + 1, y, count);
	if (y != N - 1) clawl(map, ans, N, x, y + 1, count);

	//}


}




int main() {


	int N;
	cin >> N;
	int max = 0;
	vector<int> inner(N, 0);
	vector<vector<int>> map(2, inner);

	for (auto i = 0; i < 2; i++)
	{
		for (auto j = 0; j < N; j++)
		{
			cin >> map[i][j];
		}
	}


	clawl(map, map, N);



	cout << map[1][N - 1] << endl;

	return 0;
}