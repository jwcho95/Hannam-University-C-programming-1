#include <stdio.h>
#include <Windows.h>

int main()
{
	char bell = '\a';

	printf("%c", bell);
	Sleep(1000);
	printf("ȭ�簡 �߻��Ͽ����ϴ�.");
	Sleep(1000);
	printf("%c", bell);

	return 0;
}