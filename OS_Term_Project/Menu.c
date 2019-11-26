#include "func.h"
#include "Input_Output.h"

int Menu(void)
{
	int Menu_choice;
	printf("=======Operating System Term Project=======\n");
	printf("1. 스케줄링 알고리즘\n");
	printf("2. 프로세스 초기화\n");
	printf("3. 종료\n");
	printf("메뉴를 선택하여 주십시오 : "); scanf("%d", &Menu_choice);
	printf("===========================================\n");

	return Menu_choice;
}