//�⺻ ����
//���� 18258
/*
#include <bits/stdc++.h>
using namespace std;

#define SIZE 100000

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int number; //����� ��
	cin >> number;

	string sen; //���
	int N; //�Է¹��� ����
	queue<int> x;
	int size = 0; //tail
	int head = 0; //head

	for (auto i = 0; i < number; i++) {
		cin >> sen;

		if (sen == "push") {
			cin >> N;
			
			x.push(N);
		}
		else if (sen == "pop") {
			if (x.empty()) cout << "-1\n";
			else {
				cout << x.front() << '\n';
				x.pop();
			}
		}
		else if (sen == "size") {
			cout << x.size() << '\n';
		}
		else if (sen == "empty") {
			if (x.empty()) cout << "1\n";
			else cout << "0\n";
		}
		else if (sen == "front") {
			if (x.empty()) cout << "-1\n";
			else cout << x.front() << '\n';
		}
		else if (sen == "back") {
			if (x.empty()) cout << "-1\n";
			else cout << x.back() << '\n';
		}
	}
}
*/

