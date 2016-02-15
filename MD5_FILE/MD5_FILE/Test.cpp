#include "stdafx.h"
int main2(int argc, _TCHAR* argv[])
{
	DWORD NUMBYTES = 1024;
	DWORD lpnumbytes = 0;
	BYTE Buffer[1024];
	LPCWSTR fpath = L"D:\\Stack.cs";
	HANDLE hfile = CreateFile(fpath, GENERIC_READ, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
	ReadFile(hfile, Buffer, NUMBYTES, &lpnumbytes, NULL);
	Buffer[1023]= '\0';
	printf("Data From %s: %s", fpath, Buffer);
	return 1;
}
