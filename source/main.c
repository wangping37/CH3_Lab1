#include <stdio.h>
#include <stdlib.h>
int odd(int U);
int even(int U);
int totalsum(int U);
int main(void)
{
	int n, Sum;
	char AddChoice;
	printf("1+2+...+n=?�п�Jn=");
	scanf_s("%d", &n);
	scanf_s("%c", &AddChoice ,1);
	fflush(stdin);
	printf("�аݭn���_�ƩM(O),����(E),�٬O��ƩM(I)?�п��:");
	scanf_s("%c", &AddChoice,1 );
	switch (AddChoice) 
	{
	case 'O':
		Sum = odd(n);
		break;
	case 'E':
		Sum = even(n);
		break;
	case 'I':
		Sum = totalsum(n);
		break;
	default:
		printf("��ܻ~��\n");
		system("pause");
		return -1;
	}
	printf("�`�X��%d\n", Sum);
	system("pause");
	return 0;
}
/////////////////////////////////////////////////////////////////////////
int odd(int U)
{
	int i, total = 0;
	for (i = 1; i <= U; i++)
	{
		if (i % 2 == 1)
		{
			total = total + i;
		}
	}
	return total;
}
int even(int U)
{
	int i, total = 0;
	for (i = 1; i <= U; i++)
	{
		if (i % 2 == 0)
		{
			total = total + i;
		}
	}
	return total;
}
int totalsum(int U)
{
	return odd(U) + even(U);
}