//기본 문제
//백준 18258
/*
#include <bits/stdc++.h>
using namespace std;

#define SIZE 100000

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int number; //명령의 수
	cin >> number;

	string sen; //명령
	int N; //입력받은 정수
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

