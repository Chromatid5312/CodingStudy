//백준 10828
//순수 C언어

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 10001

int main()
{
	int Com;
	scanf("%d ", &Com);

	int num;
	int Stk[SIZE];
	int count = 0;

	Stk[0] = -1;

	char Cmd[10];

	for (int i = 0; i < Com; i++) {
		scanf("%s", Cmd);

		if (strcmp(Cmd, "push") == 0) {
			scanf("%d", &num);

			Stk[++count] = num;
		}
		else if (strcmp(Cmd, "top") == 0) {
			printf("%d\n", Stk[count]);
		}
		else if (strcmp(Cmd, "size") == 0) {
			printf("%d\n", count);
		}
		else if (strcmp(Cmd, "empty") == 0) {
			if (count == 0)
				printf("1\n");
			else
				printf("0\n");
		}
		else if (strcmp(Cmd, "pop") == 0) {
			printf("%d\n", Stk[count]);

			if (count != 0) {
				count--;
			}
		}
	}
}