#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int up, down, range,up2;
	float kg,ep;
	printf("�п�J�d��A\n");
	printf("�q: ");
	scanf("%d", &up);
	printf("��: ");
	scanf("%d", &down);
	printf("�϶�: ");
	scanf("%d", &range);
	up2 = up;
	printf("(1)�S�ഫ������:\n");
	while (up<=down)
	{
		ep = up;
		kg = 0.454*ep;
		printf("%d �S -> %.2f ����\n", up, kg);
		up = up + range;
	}
	
	printf("(2)�����ഫ���S:\n");	
	for ( up2; up2 <= down;up2=up2+range)
	{
		kg = up2;
		ep = 2.2026*kg;
		printf("%d ���� -> %.2f �S\n", up2, ep);
	}
	system("pause");
	return 0;
}