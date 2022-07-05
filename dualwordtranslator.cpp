#include "global.h"
#include "searchstr.h"
#include "searchchar.h"

void dualwordtranslator(Sheet* input, Sheet* dictionary, int i)
{
	const wchar_t* word1 = input->readStr(0,0);
	vector<int> vec1 = searchstr(dictionary, word1);
	const wchar_t* sov1 = dictionary->readStr(vec1[0], 6);
	int i1 = searchchar(sov1, L's');
	const wchar_t* p1 = dictionary->readStr(vec1[0], 7);
	int pp1 = searchchar(sov1, L'1');
	int pp2 = searchchar(sov1, L'2');
	int pp3 = searchchar(sov1, L'3');

	const wchar_t* word2 = input->readStr(1,0);
	vector<int> vec2 = searchstr(dictionary, word2);
	const wchar_t* sov2 = dictionary->readStr(vec2[0], 6);
	int i2 = searchchar(sov2, L's');
	int ii2 = searchchar(sov2, L'v');

	    if ((i1 == 1) && (vec2[0] >= 62)&&(vec2[0] <= 70))
	    {
		const wchar_t* trans2 = dictionary->readStr(vec2[0], 2);
		cout << i << ". ";
		wcout << trans2;
		const wchar_t* trans1 = dictionary->readStr(vec1[0], 2);
		wcout << " " << trans1 << endl;
	    }
	     else if ((i1 == 1) && (i2 == 0)&&(ii2 == 1))
	     {
		const wchar_t* trans1 = dictionary->readStr(vec1[0], 2);
		cout << i << ". ";
		wcout << trans1;
		const wchar_t* trans2 = dictionary->readStr(vec2[0], 2);
		wcout << " " << trans2 << endl;
	     }
	    else if ((i1 == 1) && (i2 == 1) && (ii2 == 1) && (pp1 == 1))
	    {
			const wchar_t* trans1 = dictionary->readStr(vec1[0], 2);
			cout << i << ". ";
			wcout << trans1;
			const wchar_t* trans2 = dictionary->readStr(vec2[0], 2);
			wcout << " " << trans2 << endl;
		}
		else if ((i1 == 1) && (i2 == 1) && (ii2 == 1) && ((pp2 == 1) || (pp3 == 1)))
		{
			   const wchar_t* trans1 = dictionary->readStr(vec1[0], 2);
				cout << i << ". ";
				wcout << trans1;
				const wchar_t* trans2 = dictionary->readStr(vec2[1], 2);
				wcout << " " << trans2 << endl;
		}
		else
		{
			cout << "Sentence could be gramatically incorrect/incomplete" << endl;
		}
}