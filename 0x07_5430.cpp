//백준 5430번 -- 해결실패

#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>

#define SIZE 100001

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int CM; //테스트 케이스 개수
	cin >> CM;

	while (CM--) {
		char P[SIZE]; //명령
		cin >> P;
		int t = strlen(P);
		int zero = 0;

		int num; //숫자개수
		cin >> num;
		
		char number;
		deque<char> nums;
		cin >> number;

		while ((number = getchar()) != ']') {
			nums.push_back(number);
		}

		while (t--) {
			if (P[zero] == 'R') {
				reverse(nums.begin(), nums.end());
			}
			else {
				if (num == 0) {
					cout << "error\n";
					continue;
				}

				nums.pop_front();
				nums.pop_front();
				num--;
			}
			zero++;
		}

		if (num != 0) {
			cout << "[";
			for (auto i : nums) cout << i;
			cout << "]\n";
		}
	}
}