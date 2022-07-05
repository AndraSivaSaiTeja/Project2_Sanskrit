#include "global.h"

int searchchar(const wchar_t* str, wchar_t chr)
{
	int size = wcslen(str);
	int i = 1;
	while (i <= size)
	{
		if (str[i - 1] == chr)
		{
			i = size + 1;
			return 1;
		}
		else
		{
			i = i + 1;
		}
	}
	return 0;
}