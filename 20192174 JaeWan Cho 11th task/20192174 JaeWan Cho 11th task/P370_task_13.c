//#include <stdio.h>
//
//int is_multiple(int n, int m);
//
//int main(void)
//{
//	int input_n1, input_n2;
//	
//	printf("ù ��° ������ �Է��Ͻÿ�: ");
//	scanf_s("%d", &input_n1);
//	printf("�� ��° ������ �Է��Ͻÿ�: ");
//	scanf_s("%d", &input_n2);
//
//	if (is_multiple(input_n1, input_n2) == 1) // �Լ��� ������� 1�̸� ������ �ǹ��̴�.
//		printf("%d��(��) %d�� ����Դϴ�.", input_n1, input_n2);
//	else
//		printf("%d��(��) %d�� ����� �ƴմϴ�.", input_n1, input_n2);
//
//	return 0;
//}
//
//int is_multiple(int n, int m) // ������� �ƴ��� �Ǻ��ϴ� �Լ�
//{
//	int result;
//
//	if (n % m == 0)
//		result = 1;
//	else
//		result = 0;
//
//	return result;
//}