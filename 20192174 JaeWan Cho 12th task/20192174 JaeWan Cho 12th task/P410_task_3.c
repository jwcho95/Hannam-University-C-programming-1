//#include <stdio.h>
//
//int check(int x); // �α��� �õ�Ƚ���� ī��Ʈ�ϰ� ��ġ���θ� Ȯ���ϴ� �Լ�
//int key = 1234;
//
//int main(void)
//{
//	int input_password, result;
//
//	for (int i = 0; i < 3; i++) // ��й�ȣ�� 3ȸ �̻� ���
//	{
//		printf("��й�ȣ: ");
//		scanf_s("%d", &input_password);
//		result = check(input_password);
//		if (result == 1) // ��ġ�ϸ� �α��� ��
//		{
//			printf("�α��� �Ǿ����ϴ�.");
//			break;
//		}
//	}
//	
//	return 0;
//}
//
//int check(int x)
//{
//	static int count;
//	count++;
//
//	if (count >= 3)
//		printf("�α��� �õ�Ƚ�� �ʰ�\n");
//	else
//	{
//		if (x == key)
//			return 1;
//		else
//			return 0;
//	}
//}