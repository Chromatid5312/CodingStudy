//백준 1021번
/*
#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;

int main()
{
	int N, M;

	cin >> N >> M;

	//덱 선언
	deque<int> B; 
	for (auto i = 1; i <= N; i++) B.push_back(i);

	int count = 0; //2번 혹은 3번 연산 횟수

	while (M--) {
		int t;

		cin >> t;

		auto loc = find(B.begin(), B.end(), t) - B.begin(); // t의 위치
		
		while (B.front() != t) {
			if (loc < B.size() - loc) {
				B.push_back(B.front());
				B.pop_front();
			}
			else {
				B.push_front(B.back());
				B.pop_back();
			}
			count++;
		}

		B.pop_front();
	}

	cout << count;
}
*/

