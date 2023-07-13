/*
//น้มุ 10866น๘
#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	deque<int> D;

	int command, number;
	cin >> command;

	string CMD;

	while (command--) {
		cin >> CMD;
		if (CMD == "push_back") {
			cin >> number;
			D.push_back(number);
		}
		else if (CMD == "push_front") {
			cin >> number;
			D.push_front(number);
		}
		else if (CMD == "pop_back") {
			if (D.size() == 0)
				cout << "-1\n";
			else {
				cout << D.back() << '\n';
				D.pop_back();
			}
		}
		else if (CMD == "pop_front") {
			if (D.size() == 0)
				cout << "-1\n";
			else {
				cout << D.front() << '\n';
				D.pop_front();
			}
		}
		else if (CMD == "size") {
			cout << D.size() << '\n';
		}
		else if (CMD == "empty") {
			if (D.size() == 0)
				cout << "1\n";
			else
				cout << "0\n";
		}
		else if (CMD == "front") {
			if (D.size() == 0)
				cout << "-1\n";
			else
				cout << D.front() << '\n';
		}
		else if (CMD == "back") {
			if (D.size() == 0)
				cout << "-1\n";
			else
				cout << D.back() << '\n';
		}
	}
}
*/
