#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int f, i, j, m, n;
	printf("(1) �����\n");
	printf("(2) �����\n");
	printf("(3) ���y�����T����\n");
	printf("(4) ����\n");
	printf("�п�ܥ\��:");
	scanf("%d", &f);
	while (f != 4)
	{
		switch (f)
		{
		case 1:
			printf("���諬���: ");
			scanf("%d", &m);
			for (i = 1; i <= m; i++)
			{
				for (j = 1; j <= m; j++)
				{
					printf("*");
				}
				printf("\n");
			}
			printf("\n");
			break;
		case 2:
			printf("����Ϊ�����e: ");
			scanf("%d %d", &m, &n);
			for (i = 1; i <= m;i++)
			{
				for (j = 1; j <= n; j++)
				{
					printf("*");
				}
				printf("\n");
			}
			printf("\n");
			break;
		case 3:
			printf("���y�T�������: ");
			scanf("%d", &m);
			for (i = 1; i <= m;i++)
			{
				for (j = 1; j <= i;j++)
				{
					printf("*");
				}
				printf("\n");
			}
			printf("\n");
			break;		
		}
		printf("(1) �����\n");
		printf("(2) �����\n");
		printf("(3) ���y�����T����\n");
		printf("(4) ����\n");
		printf("�п�ܥ\��:");
		scanf("%d", &f);
	}
	printf("����!\n");
	printf("\n");
	system("pause");
	return 0;
}