#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, b, c, d, e, max, min,f;
	float ag;
	printf("請輸入5個數: ");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	max = a;
	if (b > max)
		max = b;
	if (c > max)
		max = c;
	if (d > max)
		max = d;
	if (e > max)
		max = e;

	min=a;
	if (b < min)
		min = b;
	if (c < min)
		min = c;
	if (d < min)
		min = d;
	if (e < min)
		min = e;

	ag = (a + b + c + d + e) / 5;

	if (a > b)
	{
		f = a; 
		a = b; 
		b = f;
	}
	if (b > c)
	{
		f = b; 
		b = c; 
		c = f;
	}
	if (c > d)
	{
		f = c; 
		c = d; 
		d = f;
	}		
	if (d > e)
	{
		f = d; 
		d = e; 
		e = f;//-------1
	}
	
	if (a > b)
	{
		f = a;
		a = b;
		b = f;
	}
	if (b > c)
	{
		f = b;
		b = c;
		c = f;
	}
	if (c > d)
	{
		f = c;
		c = d;
		d = f;//-2
	}	
	
	if (a > b)
	{
		f = a;
		a = b;
		b = f;
	}
	if (b > c)
	{
		f = b;
		b = c;
		c = f;//-3
	}	
	
	
	if (a > b)
	{
		f = a;
		a = b;
		b = f;//-4
	}
	
	
	printf("最大值 : %d\n",max);
	printf("最小值 : %d\n",min);
	printf("平均值 : %.2f\n",ag);
	printf("中間值 : %d\n",c);
	system("pause");
	return 0;
}