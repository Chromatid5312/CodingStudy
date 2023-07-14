//���� 5430�� -- �ذ����

#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>

#define SIZE 100001

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int CM; //�׽�Ʈ ���̽� ����
	cin >> CM;

	while (CM--) {
		char P[SIZE]; //���
		cin >> P;
		int t = strlen(P);
		int zero = 0;

		int num; //���ڰ���
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