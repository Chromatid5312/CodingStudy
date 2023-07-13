//백준 1158
//메모리 초과 실패

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N, K;

	cin >> N >> K;

	cout << "<";

	//연결리스트 생성
	list<int> X;

	for (auto i = 1; i <= N; i++) {
		X.push_back(i); //1~N까지의 숫자가 들어간 리스트
	}

	int i = 0, count = 0;

	for (auto RS : X) {
		i++;

		if (i % K == 0) //만약 조건에 맞다면 출력
		{
			count++;
			cout << RS;
			if (count == N) break;
			else
				cout << ", ";
		}

		else //조건 미충족시 리스트 뒤로 숫자 보내기
			X.push_back(RS);
	}

	cout << ">";
}