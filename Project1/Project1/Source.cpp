#include <stdio.h>

void main()
{
	int i,j;

	while (true) {
		printf("1~9�� ���� �Է��ϸ� �������� ��µ˴ϴ�.\n");
		printf("0�� �Է��ϸ� ���α׷��� ����˴ϴ�.\n");

		scanf_s("%d", &i);
		if (i == 0) {
			printf("���α׷� ����!\n");
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