#include "global.h"

vector<int> searchstr(Sheet* sheet, const wchar_t* str)
{
	vector<int> locs;
	int row = -1;
	int i = 1;
	int j = 0;
	int N = 96;//accessible dictionary's last row index
	const wchar_t* s;
	while (i <= N)
	{
		s = sheet->readStr(i,1);
		int comp = wcscmp(s, str);
		if (comp == 0)
		{
			locs.push_back(i);
		}
		i = i + 1;
	}
	return locs;
}