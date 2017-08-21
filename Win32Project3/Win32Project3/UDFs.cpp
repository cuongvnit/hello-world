
#include <windows.h>
#include "include\xlcall.h"
#include "include\FRAMEWRK.H"
#include <stdio.h>

// Example UDF that adds two numbers passed as longs, and

// returns a long.

__declspec(dllexport) long SumTwo(long arg1, long arg2)

{

	return arg1 + arg2;

}



// Example UDF that simply returns a string as an XLOPER12.

// Note that the string is length-prefixed in octal.

__declspec(dllexport) LPXLOPER12 WINAPI GetString(void)

{

	static XLOPER12 xResult;

	xResult.xltype = xltypeStr;

	xResult.val.str = L"\024Hello from GetString";

	return(LPXLOPER12)&xResult;

}



// Example UDF that returns a null terminated string in a char*.

__declspec(dllexport) char* WINAPI GetChars(void)

{

	char* pszNewString = NULL;

	size_t cBytes;

	cBytes = strlen("Hello from GetChars") + 1;

	pszNewString = (char*)malloc(cBytes);

	sprintf_s(pszNewString, cBytes, "Hello from GetChars");

	return pszNewString;

}