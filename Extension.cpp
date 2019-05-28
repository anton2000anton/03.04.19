#define _CRT_SECURE_NO_WARNINGS
#include"iostream"
#include"Library.h"
using namespace std;

int Extension::inputLenth()
{
	int n;
	cout << "Input lenth of word: ";
	cin >> n;
	return n;
}


char* Extension::inputString()
{
	char* string = new char[N];
	cout << "Input your string: ";
	cin.getline(string, N);
	return string;
}


char* Extension::changhWord(char* source, int lengthWords, Cod cod, codLetter codingLetter)

{
	const char* symbols = "ABCDEFGHIJKLMNOPQRSTUWVXYZabcdefghijklnmopqrstuwvxyz";
	char* pword = strpbrk(source, symbols);
	char* result = new char[N] {0};
	while (pword)
	{
		int length = strspn(pword, symbols);
		if (lengthWords == length)
		{
			char* n = cod(pword, length, codingLetter);
			strcat(result, n);
			pword += length;
			pword = strpbrk(pword, symbols);
		}
		else
		{
			strncat(result, pword, length + 1);
			pword += length;
			pword = strpbrk(pword, symbols);
		}
	}

	delete[] pword;

	return result;
}


char* Extension::codingLetter(char letter)

{
	const char* symbols = "(ZYXVWUTSRQPONMLKJIHGFEDCBA)";
	char* cod = new char[5]{ 0 };
	for (int j = 0; j < strlen(symbols) + 1; j++)
	{
		if (toupper(letter) == symbols[j])
		{
			cod[0] = symbols[0];
			if (j < 10)
			{
				cod[1] = j + '0';
				cod[2] = symbols[27];
			}
			else
			{
				cod[1] = j / 10 + '0';
				cod[2] = j % 10 + '0';
				cod[3] = symbols[27];
			}
		}
	}

	return cod;
}


char* Extension::codingWords(char* word, int length, codLetter codingLetter)
{
	char* result = new char[N] {0};
	for (int i = 0; i < length; i++)
	{
		strcat(result, codingLetter(word[i]));
	}
	strcat(result, " ");

	return result;
}


char* Extension::codingLetter2(char letter)
{
	const char* symbols = "(ZYXVWUTSRQPONMLKJIHGFEDCBA)";
	char* cod = new char[5]{ 0 };
	for (int j = 0; j < strlen(symbols) + 1; j++)
	{
		if (toupper(letter) == symbols[j])
		{
			cod[0] = symbols[27 - j];
		}
	}

	return cod;
}