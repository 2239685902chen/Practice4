#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
void Print()
{
	printf("1.加法\n");
	printf("2.减法\n");
	printf("3.乘法\n");
	printf("4.除法\n");
	printf("0.退出程序\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sud(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
void Calculator()
{
	int q = 0;
	int (*r[5])(int, int) = { 0,Add,Sud,Mul,Div };
	do
	{
		Print();
		scanf("%d", &q);
		system("cls");
		int x = 0;
		int y = 0;
		int e = 0;
		if (q < 5 && q != 0)
		{
			printf("请输入你要进行运算的两个数\n");
			scanf("%d%d", &x, &y);
			e = r[q](x, y);
			printf("结果为%d\n", e);
		}
		if (q > 4)
		{
			printf("输入错误\n");
		}
		if (q == 0)
		{
			printf("退出程序\n");
		}
	} while (q);

}
int main()
{
	Calculator();
	return 0;
}