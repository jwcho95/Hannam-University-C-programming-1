#include <stdio.h>
#include <stdlib.h> // ���� ������ �ʿ��� ���̺귯��
#include <time.h> // �ð��� ���õ� ���̺귯��

int main()
{
	int answer;
	srand((unsigned)time(NULL)); // �õ尪�� ��ȭ��Ų��.
	int result = rand()%100 + 1; // ������ �߻���Ų��.

	do
	{
		printf("������ �����Ͽ� ���ÿ�.: ");
		scanf_s("%d", &answer);
		if (answer < result)
			printf("�Է��Ͻ� ���� ���亸�� �۽��ϴ�.\n");
		else if (answer > result)
			printf("�Է��Ͻ� ���� ���亸�� Ů�ϴ�.\n");
	} while (answer != result);

	printf("�����մϴ�. �����Դϴ�!\n");
	return 0;
}