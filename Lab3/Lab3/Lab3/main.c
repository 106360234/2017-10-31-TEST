#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int f, i, j, m, n;
	printf("(1) 正方形\n");
	printf("(2) 長方形\n");
	printf("(3) 等腰直角三角形\n");
	printf("(4) 結束\n");
	printf("請選擇功能:");
	scanf("%d", &f);
	while (f != 4)
	{
		switch (f)
		{
		case 1:
			printf("正方型邊長: ");
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
			printf("長方形的高跟寬: ");
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
			printf("等腰三角形邊長: ");
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
		printf("(1) 正方形\n");
		printf("(2) 長方形\n");
		printf("(3) 等腰直角三角形\n");
		printf("(4) 結束\n");
		printf("請選擇功能:");
		scanf("%d", &f);
	}
	printf("結束!\n");
	printf("\n");
	system("pause");
	return 0;
}