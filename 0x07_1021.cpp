//���� 1021��
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

	//�� ����
	deque<int> B; 
	for (auto i = 1; i <= N; i++) B.push_back(i);

	int count = 0; //2�� Ȥ�� 3�� ���� Ƚ��

	while (M--) {
		int t;

		cin >> t;

		auto loc = find(B.begin(), B.end(), t) - B.begin(); // t�� ��ġ
		
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

