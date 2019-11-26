#pragma once
#include "func.h"
#include "Input_Output.h"

// File_Input은 반드시 이 함수를 이용해야 함
void File_Input(PROCESS_INPUT *Process, int Process_Num)
{
	FILE *fp1;
	fp1 = fopen("Input.txt", "w");
	
}