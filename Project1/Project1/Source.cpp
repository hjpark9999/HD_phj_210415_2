#include <stdio.h>

void main()
{
	int i,j;

	while (true) {
		printf("1~9의 수를 입력하면 구구단이 출력됩니다.\n");
		printf("0을 입력하면 프로그램이 종료됩니다.\n");

		scanf_s("%d", &i);
		if (i == 0) {
			printf("프로그램 종료!\n");
			break;
		}
		if (i < 0 || i>9) {
			printf("Error\n");
		}
		else {
			for (j = 1; j <= 9; j++)
			{
				printf("%d * %d = %d\n", i, j, i * j);

			}
		}
	}
	fgetc(stdin);
}