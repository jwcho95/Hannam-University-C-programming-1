//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void get_random(void);
//
//int main(void)
//{
//	get_random();
//	get_random();
//	get_random();
//
//	return 0;
//}
//
//void get_random(void)
//{
//	static int inited = 0;
//	int result;
//
//	if (inited == 0) // 초기화를 진행한다.
//	{
//		printf("초기화 실행\n");
//		srand((unsigned)time(NULL));
//		result = rand();
//		printf("%d\n", result);
//		inited = 1;
//	}
//	else // 이미 초기화 되었으므로 다시 초기화하지 않는다.
//	{
//		result = rand();
//		printf("%d\n", result);
//	}
//}