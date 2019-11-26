#include "func.h"
#include "Input_Output.h"

int main(void)
{
	int choice = Menu(); // 메뉴에서 받아온 값을
	
	switch (choice)
	{
	case 1: Scheduling_Algorithm(choice);
	case 2: Reset();
	case 3: exit(0);
	}

	

	return 0;
}