//#include <stdio.h>
//
//int check(int x); // 로그인 시도횟수를 카운트하고 일치여부를 확인하는 함수
//int key = 1234;
//
//int main(void)
//{
//	int input_password, result;
//
//	for (int i = 0; i < 3; i++) // 비밀번호를 3회 이상 물어봄
//	{
//		printf("비밀번호: ");
//		scanf_s("%d", &input_password);
//		result = check(input_password);
//		if (result == 1) // 일치하면 로그인 됨
//		{
//			printf("로그인 되었습니다.");
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
//		printf("로그인 시도횟수 초과\n");
//	else
//	{
//		if (x == key)
//			return 1;
//		else
//			return 0;
//	}
//}