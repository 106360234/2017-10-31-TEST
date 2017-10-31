#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int up, down, range,up2;
	float kg,ep;
	printf("請輸入範圍，\n");
	printf("從: ");
	scanf("%d", &up);
	printf("到: ");
	scanf("%d", &down);
	printf("區間: ");
	scanf("%d", &range);
	up2 = up;
	printf("(1)磅轉換成公斤:\n");
	while (up<=down)
	{
		ep = up;
		kg = 0.454*ep;
		printf("%d 磅 -> %.2f 公斤\n", up, kg);
		up = up + range;
	}
	
	printf("(2)公斤轉換成磅:\n");	
	for ( up2; up2 <= down;up2=up2+range)
	{
		kg = up2;
		ep = 2.2026*kg;
		printf("%d 公斤 -> %.2f 磅\n", up2, ep);
	}
	system("pause");
	return 0;
}