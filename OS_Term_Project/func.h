/*
		�ۼ���	: 2019.11.17
		����		: ������ϰ� �Լ����� �����
		��������	: None
*/

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <timeapi.h>
#include "Input_Output.h"
#pragma once


void Print(void);
void Resort(PROCESS_INPUT *Process, PROCESS_OUTPUT *OUTPUT);
void FCFS_Algorithm(PROCESS_INPUT *Process, int Process_Num);
void SJF_Algorithm(PROCESS_INPUT *Process, int Process_Num);
void Priority_Algorithm(PROCESS_INPUT *Process, int Process_Num);
void Pre_Point_Priority_Algorithm(PROCESS_INPUT *Process, int Process_Num);
void Round_Robin_Algorithm(PROCESS_INPUT *Process, int _Process_Num);
void SRT_Algorithm(PROCESS_INPUT *Process, int Process_Num);
void HRN_Algorithm(PROCESS_INPUT *Process, int Process_Num);