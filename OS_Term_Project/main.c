#include "func.h"
#include "Input_Output.h"

int main(void)
{
	int choice = Menu(); // �޴����� �޾ƿ� ����
	
	switch (choice)		// Handler�� �̿�
	{
	case 1: Scheduling_Algorithm(choice);		// �����ٸ� �˰��� ����
	case 2: Reset();							// Input �ʱ�ȭ
	case 3: exit(0);							// ����
	}

	return 0;
}