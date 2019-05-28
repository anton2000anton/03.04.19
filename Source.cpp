#define _CRT_SECURE_NO_WARNINGS
#include"iostream"
#include"Library.h"
using namespace std;
using namespace Extension;

int main()
{
	char* string = inputString();
	int lenCodingWords = inputLenth();

	cout << string << endl;
	cout << changhWord(string, lenCodingWords, codingWords, codingLetter) << endl;
	cout << changhWord(string, lenCodingWords, codingWords, codingLetter2) << endl;

	system("pause");
	return 0;
}


