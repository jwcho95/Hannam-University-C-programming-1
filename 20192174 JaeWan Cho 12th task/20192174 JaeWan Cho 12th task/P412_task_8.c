//#include <stdio.h>
//
//int count_n(int x);
//
//int main(void)
//{
//	int input_n;
//	
//	printf("������ �Է��Ͻÿ�: ");
//	scanf_s("%d", &input_n);
//	printf("�ڸ����� ����: %d", count_n(input_n));
//
//	return 0;
//}
//
//int count_n(int x)
//{
//	static int count;
//	int result;
//
//	if (x < 10)
//	{
//		count++;
//		return count;
//	}
//	else
//	{
//		count++;
//		result = count_n(x / 10);
//	}
//}