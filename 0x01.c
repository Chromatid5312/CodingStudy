//시간, 공간복잡도 문제1
//범위 중 3 혹은 5로 나누어 떨어지는 수 더하기
/*
#include <stdio.h>

int func1(int);

int main()
{
	int num;
	scanf("%d", &num);

	printf("func1(%d) = %d", num, func1(num));
}

int func1(int num)
{
	int number = 0;

	for (int i = 3; i <= num; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			number += i;
		}
	}

	return number;
}
*/
//시간, 공간복잡도 문제2
//배열 중 합이 100이 되는 두 수가 존재하는지 판별
/*
#include <stdio.h>
#define SIZE 100

int func2(int arr[], int);

int main()
{
	int arr[SIZE];

	int N;

	printf("배열 크기 : ");
	scanf("%d", &N);

	printf("배열 숫자들 : ");
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}

	printf("func2({");
	for (int i = 0; i < N - 1; i++)
		printf("%d,", arr[i]);
	printf("%d}, %d) = %d", arr[N - 1], N, func2(arr, N));
}

int func2(int arr[], int N) {
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			if (arr[i] + arr[j] == 100) {
				return 1;
			}
		}
	}

	return 0;
}
*/

//시간, 공간복잡도 문제3
//주어진 수가 제곱수인지 판단하기
/*
#include <stdio.h>

int func3(int);

int main()
{
	int num;
	scanf("%d", &num);

	printf("func3(%d) = %d", num, func3(num));
}

int func3(int num) {
	for (int i = 2; i < num; i++) {
		if (num == i * i) {
			return 1;
		}

		if (num <= i * 2);
		{
			break;
		}
	}
	return 0;
}
*/
//시간, 공간복잡도 문제4
//N 이하 수 중 가장 큰 2의 거듭제곱수 반환
/*
#include <stdio.h>

int func4(int N);

int main()
{
	int N;
	scanf("%d", &N);

	printf("func4(%d) = %d", N, func4(N));
}

int func4(int N)
{
	int number = N;

	int sam = N;

	for (int i = N; i >= 1; i--) { //2의 0제곱수(=1) ~ N 까지
		while (sam % 2 != 1) {
			sam /= 2;
		}

		if (sam == 1) {
			break;
		}

		number--;
		sam = number;
	}

	return number;
}
*/
//시간, 공간복잡도 문제4 (다른 풀이)
//N 이하 수 중 가장 큰 2의 거듭제곱수 반환
/*
#include <stdio.h>

int func4(int N);

int main()
{
	int N;
	scanf("%d", &N);

	printf("func4(%d) = %d", N, func4(N));
}

int func4(int N)
{
	int val = 1;

	while (val * 2 <= N) {
		val *= 2;
	}

	return val;
}
*/