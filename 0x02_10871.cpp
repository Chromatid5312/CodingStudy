//C++, STL 연습
//백준 10872번
/*
#include <bits/stdc++.h>
#include <stdio.h>
#define SIZE 10000
using namespace std;

int main(void)
{
	//시간 초과 방지
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int a1, a2;
	//a1 = 입력받을 정수 개수
	//a2 = a2보다 작은 수 출력 예정
	cin >> a1 >> a2;

	int a[SIZE];

	for (auto i = 0; i < a1; i++) {
		cin >> a[i];
	}

	for (auto i = 0; i < a1; i++) {
		if (a[i] < a2) {
			cout << a[i] << " ";
		}
	}
}
*/