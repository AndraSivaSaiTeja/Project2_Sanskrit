#include "global.h"
#include "searchchar.h"
#include "searchstr.h"

void quadwordtranslator(Sheet* input, Sheet* dictionary, int i)
{
	const wchar_t* word1 = input->readStr(0, 0);
	vector<int> vec1 = searchstr(dictionary, word1);
	const wchar_t* sov1 = dictionary->readStr(vec1[0], 6);
	int i1 = searchchar(sov1, L's');
	int ii1 = searchchar(sov1, L'o');
	int iii1 = searchchar(sov1, L'v');
	int j1 = vec1[0];

	const wchar_t* word2 = input->readStr(1, 0);
	vector<int> vec2 = searchstr(dictionary, word2);
	const wchar_t* sov2 = dictionary->readStr(vec2[0], 6);
	int i2 = searchchar(sov2, L's');
	int ii2 = searchchar(sov2, L'o');
	int iii2 = searchchar(sov2, L'v');
	int j2 = vec2[0];

	const wchar_t* word3 = input->readStr(2, 0);
	vector<int> vec3 = searchstr(dictionary, word3);
	const wchar_t* sov3 = dictionary->readStr(vec3[0], 6);
	int i3 = searchchar(sov3, L's');
	int ii3 = searchchar(sov3, L'o');
	int iii3 = searchchar(sov3, L'v');
	int j3 = vec3[0];

	const wchar_t* word4 = input->readStr(3, 0);
	vector<int> vec4 = { 0 };
	const wchar_t* sov4 = dictionary->readStr(vec4[0], 6);
	int i4 = searchchar(sov4, L's');
	int ii4 = searchchar(sov4, L'o');
	int iii4 = searchchar(sov4, L'v');
	int j4 = vec4[0];
	if ((i1 == 1) && (i2 == 1) && (ii2 == 1) && (i3 == 1))
	{
		const wchar_t* trans1 = dictionary->readStr(vec1[0], 2);
		cout << i << ". ";
		wcout << trans1 << " ";
		const wchar_t* trans4 = dictionary->readStr(vec4[0], 2);
		wcout << "is" << " ";
		const wchar_t* trans2 = dictionary->readStr(vec2[0], 2);
		wcout << trans2 << " ";
		const wchar_t* trans3 = dictionary->readStr(vec3[0], 2);
		wcout << trans3 <<endl;
	}
}