//#include <stdio.h>
//
//int main(void)
//{
//	int num, n1_num, n2_num;
//	int count = 0;
//	int ten_mul = 1;
//	printf("������ �Է��Ͻÿ�: ");
//	scanf_s("%d", &num);
//
//	printf("%d", num % 10); // ���� �ڸ�
//	do {
//		ten_mul *= 10; // �ڸ� ���� �ϳ��� �ø���.
//		n1_num = num / ten_mul;
//		n2_num = n1_num % 10;
//		printf("%d", n2_num);
//	} while (n1_num >= 10);
//	return 0;
//}