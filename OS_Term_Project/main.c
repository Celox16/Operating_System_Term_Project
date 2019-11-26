#include "func.h"
#include "Input_Output.h"

int main(void)
{
	int choice = Menu(); // 메뉴에서 받아온 값을
	
	switch (choice)		// Handler로 이용
	{
	case 1: Scheduling_Algorithm(choice);		// 스케줄링 알고리즘 구현
	case 2: Reset();							// Input 초기화
	case 3: exit(0);							// 종료
	}

	return 0;
}