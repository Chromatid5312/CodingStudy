//연습문제
//백준 10845번
/*
#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
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
	int x[SIZE];
	int size = 0; //tail
	int head = 0; //head

	for (auto i = 0; i < number; i++) {
		cin >> sen;

		if (sen == "push") {
			cin >> N;
			x[size] = N;
			size++;
		}
		else if (sen == "pop") {
			if (size == head) cout << "-1\n";
			else {
				cout << x[head++] << '\n';
			}
		}
		else if (sen == "size") {
			cout << size - head << '\n';
		}
		else if (sen == "empty") {
			if (size == head) cout << "1\n";
			else cout << "0\n";
		}
		else if (sen == "front") {
			if (size == head) cout << "-1\n";
			else cout << x[head] << '\n';
		}
		else if (sen == "back") {
			if (size == head) cout << "-1\n";
			else cout << x[size - 1] << '\n';
		}
	}
}
*/

