#include "global.h"

wchar_t* getconsext(const wchar_t* s)
{
	int s_len = wcslen(s);
	wchar_t* s_ext = new wchar_t[6];

	s_ext[0] = s[s_len - 6];
	s_ext[1] = s[s_len - 5];
	s_ext[2] = s[s_len - 4];
	s_ext[3] = s[s_len - 3];
	s_ext[4] = s[s_len - 2];
	s_ext[5] = s[s_len - 1];
	
	return s_ext;
}