#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
void Print()
{
	printf("1.�ӷ�\n");
	printf("2.����\n");
	printf("3.�˷�\n");
	printf("4.����\n");
	printf("0.�˳�����\n");
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
			printf("��������Ҫ���������������\n");
			scanf("%d%d", &x, &y);
			e = r[q](x, y);
			printf("���Ϊ%d\n", e);
		}
		if (q > 4)
		{
			printf("�������\n");
		}
		if (q == 0)
		{
			printf("�˳�����\n");
		}
	} while (q);

}
int main()
{
	Calculator();
	return 0;
}