#pragma once
#include<iostream>
#include<Windows.h>
#include<TlHelp32.h>

using namespace std;
char _break_point[31] = "servisatk.exe";


void TerminateProc(char* ProcName) {
	PROCESSENTRY32 pe32;
	HANDLE hSnapshot = NULL;
	pe32.dwSize = sizeof(PROCESSENTRY32);
	hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);

	if (Process32First(hSnapshot, &pe32)) {
		do {
			if (strcmp(pe32.szExeFile, ProcName) == 0) {
				HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pe32.th32ProcessID);
				TerminateProcess(hProcess, NULL);
			}
		} while (Process32Next(hSnapshot, &pe32));
	}

	if (hSnapshot != INVALID_HANDLE_VALUE)
		CloseHandle(hSnapshot);
}

