/*#include <stdio.h>
#include<stdlib.h> // 난수 생성 함수가 포함되어 있는 라이브러리
#include<time.h> // 난수 생성을 위한 라이브러리

int func(int x); // 절댓값을 구하는 함수

int main()
{
	int player_n, com_n, minus_n;
	
	srand(time(NULL)); // 시간을 이용한 난수 생성
	com_n = rand()%3 + 1;
	
	printf("선택하시오(1: 가위, 2: 바위, 3: 보)");
	scanf_s("%d", &player_n);

	minus_n = player_n - com_n;
	minus_n = func(minus_n); // 두 수의 차에 절댓값을 적용

	if (player_n != com_n)
	{
		if (minus_n == 1) // 차이가 1이면 큰 수가 승리
		{
			if (player_n > com_n)
				printf("사용자가 이겼음");
			else
				printf("컴퓨터가 이겼음");
		}
		else // 차이가 2이면 작은 수가 승리
		{
			if (player_n < com_n)
				printf("사용자가 이겼음");
			else
				printf("컴퓨터가 이겼음");
		}
	}
	else
		printf("컴퓨터와 사용자가 비겼음");

	return 0;
}

int func(int x) // 절댓값을 구하는 함수의 내용
{
	int result;
	
	if (x >= 0)
		result = x;
	else
		result = x * -1;

	return result;
}*/