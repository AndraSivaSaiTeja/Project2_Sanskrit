#include "global.h"
#include "getconsext.h"
#include "searchstr.h"
#include "searchchar.h"
#include "dualwordtranslator.h"
#include "triplewordtranslator.h"
#include "quadwordtranslator.h"

#define N 20 //total number of sentences
#define M 5 //M-1 is max no of words in a sentence

int main()
{
    int i,j;
    int end = 0;
    Book* Dictionary = xlCreateBook();
    Book* Input = xlCreateBook();
    Dictionary->load(L"Dictionary.xls");
    Input->load(L"Input.xls");
    Sheet* dictionary = Dictionary->getSheet(0);
    Sheet* input;
    const wchar_t* endword = L"0";
    const wchar_t* Endword;
    cout << "Enter number of the sentence(1 to " << N << ") : ";
    cin >> i;
    if ((i >= 1) && (i <= N))
    {
        input = Input->getSheet(i - 1);
        j = 2;
        while (j <= M)
        {
            Endword = input->readStr(j - 1, 0);
            if (wcscmp(endword, Endword) == 0)
            {
                switch (j - 1)
                {
                case 2:
                    dualwordtranslator(input, dictionary, i);
                    break;
                case 3:
                    triplewordtranslator(input, dictionary, i);
                    break;
                case 4:
                    quadwordtranslator(input, dictionary, i);
                    break;
                }
                j = M + 1;
            }
            else
            {
                j = j + 1;
            }
        }
    }
    else
    {
        cout << "You have chosen wrong sentence" << endl;
    }
    Dictionary->release();
    Input->release();
    return main();
}
