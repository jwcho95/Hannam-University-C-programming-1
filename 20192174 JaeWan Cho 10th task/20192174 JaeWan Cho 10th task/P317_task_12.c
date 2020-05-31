//#include <stdio.h>
//
//int main(void)
//{
//	int num, result;
//	int result1 = 0;
//	int result2 = 1;
//
//	printf("몇 번째 항까지 구할까요? ");
//	scanf_s("%d", &num);
//
//	if (num == 1) // 1번째 항
//		printf("0, 1");
//	else if (num == 0) // 0번째 항
//		printf("0");
//	else
//	{
//		printf("0, 1, ");
//		for (int i = 2; i <= num; i++)
//		{
//			result = result1 + result2;
//			result1 = result2;
//			result2 = result;
//
//			printf("%d, ", result);
//		}
//	}
//	return 0;
//}