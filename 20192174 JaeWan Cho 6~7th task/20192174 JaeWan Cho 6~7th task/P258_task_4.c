/*#include <stdio.h>
#include<stdlib.h> // ���� ���� �Լ��� ���ԵǾ� �ִ� ���̺귯��
#include<time.h> // ���� ������ ���� ���̺귯��

int func(int x); // ������ ���ϴ� �Լ�

int main()
{
	int player_n, com_n, minus_n;
	
	srand(time(NULL)); // �ð��� �̿��� ���� ����
	com_n = rand()%3 + 1;
	
	printf("�����Ͻÿ�(1: ����, 2: ����, 3: ��)");
	scanf_s("%d", &player_n);

	minus_n = player_n - com_n;
	minus_n = func(minus_n); // �� ���� ���� ������ ����

	if (player_n != com_n)
	{
		if (minus_n == 1) // ���̰� 1�̸� ū ���� �¸�
		{
			if (player_n > com_n)
				printf("����ڰ� �̰���");
			else
				printf("��ǻ�Ͱ� �̰���");
		}
		else // ���̰� 2�̸� ���� ���� �¸�
		{
			if (player_n < com_n)
				printf("����ڰ� �̰���");
			else
				printf("��ǻ�Ͱ� �̰���");
		}
	}
	else
		printf("��ǻ�Ϳ� ����ڰ� �����");

	return 0;
}

int func(int x) // ������ ���ϴ� �Լ��� ����
{
	int result;
	
	if (x >= 0)
		result = x;
	else
		result = x * -1;

	return result;
}*/