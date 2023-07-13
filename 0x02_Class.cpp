//C++, STL 연습
/*
//참조자
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

bool cmp(vector<int>& v1, vector<int>& v2, int idx) {
	return v1[idx] > v2[idx];
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<int> v1(100);
	vector<int> v2(100);

	v1[10] = 5;
	v2[10] = 4;

	cout << cmp(v1, v2, 10);
}
*/
/*
//C++에서 공백 포함 입력받는 방법
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
	//시간 초과 방지
	ios::sync_with_stdio();
	cin.tie(0);
	cout.tie(0);

	string s;
	getline(cin, s);
	cout << s;
}
*/

