#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<string>

using namespace std;

int main() {

	string N;
	char blue = '1';
	char red = '0';
	int removed_cube_num = 0;

	cin >> N;
	int head_num = 1;
	int head_position = 0;
	int tail_num = 1;
	char head = N[0];
	char tail;
	while (N.find('0') != string::npos && N.find('1') != string::npos) {
		for (auto i = 0; i < N.length(); i++) {

			if (head_position == i)continue;

			if (head == N[i]) {
				head_num += 1;
			}
			else {
				tail = N[i];
				for (auto j = i + 1; j < N.length(); j++) {
					if (tail == N[j]) {
						tail_num += 1;
					}
					else {
						if (head_num < tail_num) {
							removed_cube_num += head_num * 2;
							N.erase(N.begin(), N.begin() + head_num * 2);
						}
						else {
							removed_cube_num += tail_num * 2;
							N.erase(N.begin() + head_num - tail_num, N.begin() + head_num + tail_num);
						}
					}
				}
			}

			head_num = 1;
			tail_num = 1;
			head_position = 0;
			head = N[0];
		}
	}

	cout << removed_cube_num << endl;

	return 0;
}