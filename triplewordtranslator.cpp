#include "global.h"
#include "searchstr.h"
#include "searchchar.h"

void triplewordtranslator(Sheet* input, Sheet* dictionary, int i)
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
	if ((i1 == 1) && (ii2 == 1) && (j3 >= 62)&&(j3 <= 70))
	{
		const wchar_t* trans3 = dictionary->readStr(j3, 2);
		cout << i << ". ";
		wcout << trans3;
		const wchar_t* trans1 = dictionary->readStr(j1, 2);
		wcout << trans1<<" ";
		const wchar_t* trans2 = dictionary->readStr(j2, 2);
		wcout << trans2 << endl;
	}
	else if ((i1 == 1) && (j2 == 82) && (iii3 == 1))
	{
		const wchar_t* trans2 = dictionary->readStr(j2, 2);
		cout << i << ". ";
		wcout << trans2 << " ";
		const wchar_t* trans3 = dictionary->readStr(j3, 2);
		wcout << trans3 << " ";
		const wchar_t* trans1 = dictionary->readStr(j1, 2);
		wcout << trans1 << endl;
	}
	else if ((i1 == 1) && ((j2 == 84)||(j2 == 83)) && (iii3 == 1))
	{
		const wchar_t* trans1 = dictionary->readStr(j1, 2);
		cout << i << ". ";
		wcout << trans1 << " ";
		const wchar_t* trans3 = dictionary->readStr(j3, 2);
		wcout << trans3 << " ";
		const wchar_t* trans2 = dictionary->readStr(j2, 2);
		wcout << trans2 << endl;
	}
	else if ((i1 == 1) && (ii2 == 1) && (iii3 == 1))
	{
		const wchar_t* trans1 = dictionary->readStr(j1, 2);
		cout << i << ". ";
		wcout << trans1 << " ";
		const wchar_t* trans3 = dictionary->readStr(j3, 2);
		wcout << trans3 << " ";
		const wchar_t* trans2 = dictionary->readStr(j2, 2);
		wcout << trans2 << endl;
	}
}