//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int b_rand(void);
//
//int main(void)
//{
//	srand((unsigned)time(NULL));
//
//	for (int i = 0; i < 5; i++) // 5번 호출하기 위해 for문을 이용한다.
//	{
//		printf("%d ",b_rand());
//	}
//
//	return 0;
//}
//
//int b_rand(void) // 0 또는 1을 무작위로 반환하는 함수
//{
//	int result;
//
//	result = rand() % 2;
//
//	return result;
//}